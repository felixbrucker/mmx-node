/*
 * vm_interface.cpp
 *
 *  Created on: May 12, 2022
 *      Author: mad
 */

#include <mmx/vm/Engine.h>
#include <mmx/vm_interface.h>
#include <mmx/uint128.hpp>
#include <mmx/addr_t.hpp>


namespace mmx {
namespace vm {

const contract::method_t* find_method(std::shared_ptr<const contract::Binary> binary, const std::string& method_name)
{
	auto iter = binary->methods.find(method_name);
	if(iter != binary->methods.end()) {
		return &iter->second;
	}
	return nullptr;
}

void set_balance(std::shared_ptr<vm::Engine> engine, const std::map<addr_t, uint128>& balance)
{
	const auto addr = vm::MEM_EXTERN + vm::EXTERN_BALANCE;
	engine->assign(addr, std::make_unique<vm::map_t>());
	for(const auto& entry : balance) {
		engine->write_key(addr, vm::uint_t(entry.first.to_uint256()), vm::uint_t(entry.second));
	}
}

void set_deposit(std::shared_ptr<vm::Engine> engine, const txout_t& deposit)
{
	const auto addr = vm::MEM_EXTERN + vm::EXTERN_DEPOSIT;
	engine->assign(addr, std::make_unique<vm::array_t>());
	engine->push_back(addr, vm::uint_t(deposit.contract.to_uint256()));
	engine->push_back(addr, vm::uint_t(deposit.amount));
}

std::vector<std::unique_ptr<vm::var_t>> read_constants(const void* constant, const size_t constant_size)
{
	size_t offset = 0;
	std::vector<std::unique_ptr<vm::var_t>> out;
	while(offset < constant_size) {
		std::unique_ptr<vm::var_t> var;
		offset += vm::deserialize(var, ((const uint8_t*)constant) + offset, constant_size - offset, false, false);
		out.push_back(std::move(var));
	}
	return out;
}

std::vector<std::unique_ptr<vm::var_t>> read_constants(std::shared_ptr<const contract::Binary> binary)
{
	return read_constants(binary->constant.data(), binary->constant.size());
}

void load(	std::shared_ptr<vm::Engine> engine,
			std::shared_ptr<const contract::Binary> binary)
{
	uint64_t dst = 0;
	for(auto& var : read_constants(binary)) {
		if(dst < vm::MEM_EXTERN) {
			engine->assign(dst++, std::move(var));
		}
	}
	if(dst >= vm::MEM_EXTERN) {
		throw std::runtime_error("constant memory overflow");
	}
	vm::deserialize(engine->code, binary->binary.data(), binary->binary.size());

	engine->init();
	engine->check_gas();
}

void copy(	std::shared_ptr<vm::Engine> dst, std::shared_ptr<vm::Engine> src,
			const uint64_t dst_addr, const uint64_t* dst_key, const vm::var_t* var)
{
	std::unique_ptr<vm::var_t> out;
	if(var) {
		switch(var->type) {
			case vm::TYPE_REF: {
				const auto heap = dst->alloc();
				copy(dst, src, heap, ((const vm::ref_t*)var)->address);
				out = std::make_unique<vm::ref_t>(heap);
				break;
			}
			case vm::TYPE_ARRAY: {
				const auto array = (const vm::array_t*)var;
				for(uint64_t i = 0; i < array->size; ++i) {
					copy(dst, src, dst_addr, &i, src->read_entry(array->address, i));
				}
				out = std::make_unique<vm::array_t>(array->size);
				break;
			}
			case vm::TYPE_MAP: {
				const auto map = (const vm::map_t*)var;
				for(const auto& entry : src->find_entries(map->address)) {
					const auto key = dst->lookup(src->read(entry.first), false);
					copy(dst, src, dst_addr, &key, entry.second);
				}
				out = std::make_unique<vm::map_t>();
				break;
			}
			default:
				out = clone(var);
		}
	}
	if(!out) {
		out = std::make_unique<vm::var_t>();
	}
	if(dst_key) {
		dst->assign_entry(dst_addr, *dst_key, std::move(out));
	} else {
		dst->assign(dst_addr, std::move(out));
	}
	dst->check_gas();
}

void copy(std::shared_ptr<vm::Engine> dst, std::shared_ptr<vm::Engine> src, const uint64_t dst_addr, const uint64_t src_addr)
{
	copy(dst, src, dst_addr, nullptr, src->read(src_addr));
}

class AssignTo : public vnx::Visitor {
public:
	std::shared_ptr<vm::Engine> engine;

	AssignTo(std::shared_ptr<vm::Engine> engine, const uint64_t dst)
		:	engine(engine)
	{
		frame_t frame;
		frame.dst = dst;
		stack.push_back(frame);
	}

	void visit_null() override {
		auto& frame = stack.back();
		if(frame.lookup) {
			frame.key = engine->lookup(vm::var_t(), false);
		} else if(frame.key) {
			engine->write_entry(frame.dst, *frame.key, vm::var_t());
		} else {
			engine->write(frame.dst, vm::var_t());
		}
	}

	void visit(const bool& value) override {
		const auto var = vm::var_t(value ? vm::TYPE_TRUE : vm::TYPE_FALSE);
		auto& frame = stack.back();
		if(frame.lookup) {
			frame.key = engine->lookup(var, false);
		} else if(frame.key) {
			engine->write_entry(frame.dst, *frame.key, var);
		} else {
			engine->write(frame.dst, var);
		}
	}

	void visit(const uint8_t& value) override {
		visit(uint256_t(value));
	}
	void visit(const uint16_t& value) override {
		visit(uint256_t(value));
	}
	void visit(const uint32_t& value) override {
		visit(uint256_t(value));
	}
	void visit(const uint64_t& value) override {
		visit(uint256_t(value));
	}

	void visit(const int8_t& value) override {
		visit(uint256_t(value));
	}
	void visit(const int16_t& value) override {
		visit(uint256_t(value));
	}
	void visit(const int32_t& value) override {
		visit(uint256_t(value));
	}
	void visit(const int64_t& value) override {
		visit(uint256_t(value));
	}

	void visit(const vnx::float32_t& value) override {
		visit(uint256_t(int64_t(value)));
	}
	void visit(const vnx::float64_t& value) override {
		visit(uint256_t(int64_t(value)));
	}

	void visit(const std::string& value) override {
		auto var = vm::binary_t::alloc(value);
		auto& frame = stack.back();
		if(frame.lookup) {
			frame.key = engine->lookup(var.get(), false);
		} else if(frame.key) {
			engine->assign_entry(frame.dst, *frame.key, std::move(var));
		} else {
			engine->assign(frame.dst, std::move(var));
		}
	}

	void visit(const uint256_t& value) {
		const auto var = vm::uint_t(value);
		auto& frame = stack.back();
		if(frame.lookup) {
			frame.key = engine->lookup(var, false);
		} else if(frame.key) {
			engine->write_entry(frame.dst, *frame.key, var);
		} else {
			engine->write(frame.dst, var);
		}
	}

	void list_begin(size_t size) override {
		const auto addr = engine->alloc();
		engine->assign(addr, std::make_unique<vm::array_t>(size));
		stack.emplace_back(addr);
	}
	void list_element(size_t index) override {
		stack.back().key = index;
	}
	void list_end(size_t size) override {
		const auto addr = stack.back().dst;
		stack.pop_back();
		const auto& frame = stack.back();
		if(frame.lookup) {
			throw std::logic_error("key type not supported");
		}
		if(frame.key) {
			engine->write_entry(frame.dst, *frame.key, vm::ref_t(addr));
		} else {
			engine->write(frame.dst, vm::ref_t(addr));
		}
	}

	void map_begin(size_t size) override {
		const auto addr = engine->alloc();
		engine->assign(addr, std::make_unique<vm::map_t>());
		stack.emplace_back(addr);
	}
	void map_key(size_t index) override {
		stack.back().lookup = true;
	}
	void map_value(size_t index) override {
		stack.back().lookup = false;
	}
	void map_end(size_t size) override {
		const auto addr = stack.back().dst;
		stack.pop_back();
		const auto& frame = stack.back();
		if(frame.lookup) {
			throw std::logic_error("key type not supported");
		}
		if(frame.key) {
			engine->write_entry(frame.dst, *frame.key, vm::ref_t(addr));
		} else {
			engine->write(frame.dst, vm::ref_t(addr));
		}
	}

private:
	struct frame_t {
		uint64_t dst = 0;
		vnx::optional<uint64_t> key;
		bool lookup = false;
		frame_t() = default;
		frame_t(const uint64_t& dst) : dst(dst) {}
	};
	std::vector<frame_t> stack;

};

void assign(std::shared_ptr<vm::Engine> engine, const uint64_t dst, const vnx::Variant& value)
{
	AssignTo visitor(engine, dst);
	vnx::accept(visitor, value);
}

vnx::Variant convert(std::shared_ptr<vm::Engine> engine, const vm::var_t* var)
{
	if(var) {
		switch(var->type) {
			case vm::TYPE_NIL:
				return vnx::Variant(nullptr);
			case vm::TYPE_TRUE:
				return vnx::Variant(true);
			case vm::TYPE_FALSE:
				return vnx::Variant(false);
			case vm::TYPE_REF:
				return convert(engine, engine->read(((const vm::ref_t*)var)->address));
			case vm::TYPE_UINT: {
				const auto& value = ((const vm::uint_t*)var)->value;
				if(!value.upper()) {
					if(!value.lower().upper()) {
						return vnx::Variant(value.lower().lower());
					}
					return vnx::Variant(mmx::uint128(value.lower()));
				}
				return vnx::Variant(hash_t::from_bytes(value));
			}
			case vm::TYPE_STRING:
				return vnx::Variant(((const vm::binary_t*)var)->to_string());
			case vm::TYPE_BINARY:
				return vnx::Variant(((const vm::binary_t*)var)->to_hex_string());
			case vm::TYPE_ARRAY: {
				const auto array = (const vm::array_t*)var;
				std::vector<vnx::Variant> tmp;
				for(uint64_t i = 0; i < array->size; ++i) {
					tmp.push_back(convert(engine, engine->read_entry(array->address, i)));
				}
				return vnx::Variant(tmp);
			}
			case vm::TYPE_MAP: {
				const auto map = (const vm::map_t*)var;
				std::map<vnx::Variant, vnx::Variant> tmp;
				for(const auto& entry : engine->find_entries(map->address)) {
					tmp[convert(engine, engine->read(entry.first))] = convert(engine, entry.second);
				}
				return vnx::Variant(tmp);
			}
			default:
				break;
		}
	}
	return vnx::Variant();
}

vnx::Variant read(std::shared_ptr<vm::Engine> engine, const uint64_t address)
{
	return convert(engine, engine->read(address));
}

void set_args(std::shared_ptr<vm::Engine> engine, const std::vector<vnx::Variant>& args)
{
	for(size_t i = 0; i < args.size(); ++i) {
		const auto dst = vm::MEM_STACK + 1 + i;
		if(dst >= vm::MEM_STATIC) {
			throw std::runtime_error("stack overflow");
		}
		assign(engine, dst, args[i]);
	}
}

void execute(std::shared_ptr<vm::Engine> engine, const contract::method_t& method)
{
	engine->begin(method.entry_point);
	engine->run();

	if(!method.is_const) {
		engine->commit();
	}
	engine->check_gas();
}

std::string to_string(const var_t* var)
{
	if(!var) {
		return "nullptr";
	}
	switch(var->type) {
		case TYPE_NIL:
			return "null";
		case TYPE_TRUE:
			return "true";
		case TYPE_FALSE:
			return "false";
		case TYPE_REF:
			return "<0x" + vnx::to_hex_string(((const ref_t*)var)->address) + ">";
		case TYPE_UINT: {
			const auto& value = ((const uint_t*)var)->value;
			if(value >> 128 == 0) {
				return value.str(10);
			}
			if(value >> 128 == uint128_t(-1)) {
				return std::to_string(int64_t(uint64_t(value)));
			}
			return value.str(10) + " | " + hash_t::from_bytes(value).to_string() + " | " + addr_t(value).to_string();
		}
		case TYPE_STRING:
			return "\"" + ((const binary_t*)var)->to_string() + "\"";
		case TYPE_BINARY:
			return "0x" + ((const binary_t*)var)->to_hex_string();
		case TYPE_ARRAY: {
			auto array = (const array_t*)var;
			return "[0x" + vnx::to_hex_string(array->address) + "," + std::to_string(array->size) + "]";
		}
		case TYPE_MAP:
			return "{0x" + vnx::to_hex_string(((const map_t*)var)->address) + "}";
		default:
			return "?";
	}
}

std::string to_string(const varptr_t& var) {
	return to_string(var.get());
}

std::string to_string_value(const var_t* var)
{
	if(!var) {
		return "nullptr";
	}
	switch(var->type) {
		case TYPE_STRING:
			return ((const binary_t*)var)->to_string();
		default:
			return to_string(var);
	}
}

std::string to_string_value(const varptr_t& var) {
	return to_string_value(var.get());
}

uint64_t to_ref(const var_t* var)
{
	if(!var) {
		return 0;
	}
	switch(var->type) {
		case TYPE_REF:
			return ((const ref_t*)var)->address;
		case TYPE_ARRAY:
			return ((const array_t*)var)->address;
		case TYPE_MAP:
			return ((const map_t*)var)->address;
		default:
			return 0;
	}
}

uint64_t to_ref(const varptr_t& var) {
	return to_ref(var.get());
}

uint256_t to_uint(const var_t* var)
{
	if(!var) {
		return 0;
	}
	switch(var->type) {
		case TYPE_UINT:
			return ((const uint_t*)var)->value;
		default:
			return 0;
	}
}

uint256_t to_uint(const varptr_t& var) {
	return to_uint(var.get());
}

hash_t to_hash(const var_t* var)
{
	if(!var) {
		return hash_t();
	}
	switch(var->type) {
		case TYPE_UINT:
			return hash_t::from_bytes(((const uint_t*)var)->value);
		default:
			return hash_t();
	}
}

hash_t to_hash(const varptr_t& var) {
	return to_hash(var.get());
}

addr_t to_addr(const var_t* var)
{
	if(!var) {
		return addr_t();
	}
	switch(var->type) {
		case TYPE_UINT:
			return addr_t(((const uint_t*)var)->value);
		case TYPE_STRING:
			return addr_t(((const binary_t*)var)->to_string());
		default:
			return addr_t();
	}
}

addr_t to_addr(const varptr_t& var) {
	return to_addr(var.get());
}

void dump_code(std::ostream& out, std::shared_ptr<const contract::Binary> bin, const vnx::optional<std::string>& method)
{
	{
		size_t i = 0;
		out << "constants:" << std::endl;
		for(const auto& var : mmx::vm::read_constants(bin)) {
			out << "  [0x" << vnx::to_hex_string(i++) << "] " << mmx::vm::to_string(var.get()) << std::endl;
		}
	}
	out << "fields:" << std::endl;
	for(const auto& entry : bin->fields) {
		out << "  [0x" << vnx::to_hex_string(entry.second) << "] " << entry.first << std::endl;
	}
	std::map<size_t, mmx::contract::method_t> method_table;
	for(const auto& entry : bin->methods) {
		method_table[entry.second.entry_point] = entry.second;
	}
	std::vector<mmx::vm::instr_t> code;
	const auto length = mmx::vm::deserialize(code, bin->binary.data(), bin->binary.size());
	size_t i = 0;
	if(method) {
		auto iter = bin->methods.find(*method);
		if(iter == bin->methods.end()) {
			out << "No such method: " << *method << std::endl;
			return;
		}
		i = iter->second.entry_point;
	}
	out << "code:" << std::endl;

	for(; i < code.size(); ++i) {
		auto iter = method_table.find(i);
		if(iter != method_table.end()) {
			out << iter->second.name << " (";
			int k = 0;
			for(const auto& arg : iter->second.args) {
				if(k++) {
					out << ", ";
				}
				out << arg;
			}
			out << ")" << std::endl;
		}
		out << "  [0x" << vnx::to_hex_string(i) << "] " << to_string(code[i]) << std::endl;

		if(method && code[i].code == mmx::vm::OP_RET) {
			break;
		}
	}
	if(!method) {
		out << "Total size: " << length << " bytes" << std::endl;
		out << "Total instructions: " << code.size() << std::endl;
	}
}


} // vm
} // mmx
