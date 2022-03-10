
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/ChainParams.hxx>
#include <mmx/Contract.hxx>
#include <mmx/Operation.hxx>
#include <mmx/Solution.hxx>
#include <mmx/Transaction_add_output.hxx>
#include <mmx/Transaction_add_output_return.hxx>
#include <mmx/Transaction_calc_cost.hxx>
#include <mmx/Transaction_calc_cost_return.hxx>
#include <mmx/Transaction_calc_hash.hxx>
#include <mmx/Transaction_calc_hash_return.hxx>
#include <mmx/Transaction_finalize.hxx>
#include <mmx/Transaction_finalize_return.hxx>
#include <mmx/Transaction_get_all_outputs.hxx>
#include <mmx/Transaction_get_all_outputs_return.hxx>
#include <mmx/Transaction_get_output.hxx>
#include <mmx/Transaction_get_output_return.hxx>
#include <mmx/Transaction_get_solution.hxx>
#include <mmx/Transaction_get_solution_return.hxx>
#include <mmx/Transaction_is_signed.hxx>
#include <mmx/Transaction_is_signed_return.hxx>
#include <mmx/Transaction_is_valid.hxx>
#include <mmx/Transaction_is_valid_return.hxx>
#include <mmx/Transaction_merge_sign.hxx>
#include <mmx/Transaction_merge_sign_return.hxx>
#include <mmx/TransactionBase.hxx>
#include <mmx/TransactionBase_calc_cost.hxx>
#include <mmx/TransactionBase_calc_cost_return.hxx>
#include <mmx/TransactionBase_calc_hash.hxx>
#include <mmx/TransactionBase_calc_hash_return.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/hash_t.hpp>
#include <mmx/tx_in_t.hxx>
#include <mmx/tx_out_t.hxx>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 Transaction::VNX_TYPE_HASH(0xce0462acdceaa5bcull);
const vnx::Hash64 Transaction::VNX_CODE_HASH(0x5906348122fbd8bull);

vnx::Hash64 Transaction::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Transaction::get_type_name() const {
	return "mmx.Transaction";
}

const vnx::TypeCode* Transaction::get_type_code() const {
	return mmx::vnx_native_type_code_Transaction;
}

std::shared_ptr<Transaction> Transaction::create() {
	return std::make_shared<Transaction>();
}

std::shared_ptr<vnx::Value> Transaction::clone() const {
	return std::make_shared<Transaction>(*this);
}

void Transaction::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Transaction::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Transaction::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_Transaction;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, id);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, version);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, inputs);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, outputs);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, exec_outputs);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, execute);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, solutions);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, deploy);
	_visitor.type_end(*_type_code);
}

void Transaction::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.Transaction\"";
	_out << ", \"id\": "; vnx::write(_out, id);
	_out << ", \"version\": "; vnx::write(_out, version);
	_out << ", \"inputs\": "; vnx::write(_out, inputs);
	_out << ", \"outputs\": "; vnx::write(_out, outputs);
	_out << ", \"exec_outputs\": "; vnx::write(_out, exec_outputs);
	_out << ", \"execute\": "; vnx::write(_out, execute);
	_out << ", \"solutions\": "; vnx::write(_out, solutions);
	_out << ", \"deploy\": "; vnx::write(_out, deploy);
	_out << "}";
}

void Transaction::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Transaction::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.Transaction";
	_object["id"] = id;
	_object["version"] = version;
	_object["inputs"] = inputs;
	_object["outputs"] = outputs;
	_object["exec_outputs"] = exec_outputs;
	_object["execute"] = execute;
	_object["solutions"] = solutions;
	_object["deploy"] = deploy;
	return _object;
}

void Transaction::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "deploy") {
			_entry.second.to(deploy);
		} else if(_entry.first == "exec_outputs") {
			_entry.second.to(exec_outputs);
		} else if(_entry.first == "execute") {
			_entry.second.to(execute);
		} else if(_entry.first == "id") {
			_entry.second.to(id);
		} else if(_entry.first == "inputs") {
			_entry.second.to(inputs);
		} else if(_entry.first == "outputs") {
			_entry.second.to(outputs);
		} else if(_entry.first == "solutions") {
			_entry.second.to(solutions);
		} else if(_entry.first == "version") {
			_entry.second.to(version);
		}
	}
}

vnx::Variant Transaction::get_field(const std::string& _name) const {
	if(_name == "id") {
		return vnx::Variant(id);
	}
	if(_name == "version") {
		return vnx::Variant(version);
	}
	if(_name == "inputs") {
		return vnx::Variant(inputs);
	}
	if(_name == "outputs") {
		return vnx::Variant(outputs);
	}
	if(_name == "exec_outputs") {
		return vnx::Variant(exec_outputs);
	}
	if(_name == "execute") {
		return vnx::Variant(execute);
	}
	if(_name == "solutions") {
		return vnx::Variant(solutions);
	}
	if(_name == "deploy") {
		return vnx::Variant(deploy);
	}
	return vnx::Variant();
}

void Transaction::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "id") {
		_value.to(id);
	} else if(_name == "version") {
		_value.to(version);
	} else if(_name == "inputs") {
		_value.to(inputs);
	} else if(_name == "outputs") {
		_value.to(outputs);
	} else if(_name == "exec_outputs") {
		_value.to(exec_outputs);
	} else if(_name == "execute") {
		_value.to(execute);
	} else if(_name == "solutions") {
		_value.to(solutions);
	} else if(_name == "deploy") {
		_value.to(deploy);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Transaction& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Transaction& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Transaction::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Transaction::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.Transaction";
	type_code->type_hash = vnx::Hash64(0xce0462acdceaa5bcull);
	type_code->code_hash = vnx::Hash64(0x5906348122fbd8bull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::Transaction);
	type_code->parents.resize(1);
	type_code->parents[0] = ::mmx::TransactionBase::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Transaction>(); };
	type_code->depends.resize(2);
	type_code->depends[0] = ::mmx::tx_in_t::static_get_type_code();
	type_code->depends[1] = ::mmx::tx_out_t::static_get_type_code();
	type_code->methods.resize(12);
	type_code->methods[0] = ::mmx::Transaction_add_output::static_get_type_code();
	type_code->methods[1] = ::mmx::Transaction_calc_cost::static_get_type_code();
	type_code->methods[2] = ::mmx::Transaction_calc_hash::static_get_type_code();
	type_code->methods[3] = ::mmx::Transaction_finalize::static_get_type_code();
	type_code->methods[4] = ::mmx::Transaction_get_all_outputs::static_get_type_code();
	type_code->methods[5] = ::mmx::Transaction_get_output::static_get_type_code();
	type_code->methods[6] = ::mmx::Transaction_get_solution::static_get_type_code();
	type_code->methods[7] = ::mmx::Transaction_is_signed::static_get_type_code();
	type_code->methods[8] = ::mmx::Transaction_is_valid::static_get_type_code();
	type_code->methods[9] = ::mmx::Transaction_merge_sign::static_get_type_code();
	type_code->methods[10] = ::mmx::TransactionBase_calc_cost::static_get_type_code();
	type_code->methods[11] = ::mmx::TransactionBase_calc_hash::static_get_type_code();
	type_code->fields.resize(8);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "id";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 4;
		field.name = "version";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "inputs";
		field.code = {12, 19, 0};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "outputs";
		field.code = {12, 19, 1};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "exec_outputs";
		field.code = {12, 19, 1};
	}
	{
		auto& field = type_code->fields[5];
		field.is_extended = true;
		field.name = "execute";
		field.code = {12, 16};
	}
	{
		auto& field = type_code->fields[6];
		field.is_extended = true;
		field.name = "solutions";
		field.code = {12, 16};
	}
	{
		auto& field = type_code->fields[7];
		field.is_extended = true;
		field.name = "deploy";
		field.code = {16};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> Transaction::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
		case 0x479ef0d3de1f6ea3ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_add_output>(_method);
			auto _return_value = ::mmx::Transaction_add_output_return::create();
			add_output(_args->currency, _args->address, _args->amount, _args->split);
			return _return_value;
		}
		case 0x39606f716fd28613ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_calc_cost>(_method);
			auto _return_value = ::mmx::Transaction_calc_cost_return::create();
			_return_value->_ret_0 = calc_cost(_args->params);
			return _return_value;
		}
		case 0xe972a4170a40f2ecull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_calc_hash>(_method);
			auto _return_value = ::mmx::Transaction_calc_hash_return::create();
			_return_value->_ret_0 = calc_hash();
			return _return_value;
		}
		case 0x75a626fc20f09905ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_finalize>(_method);
			auto _return_value = ::mmx::Transaction_finalize_return::create();
			finalize();
			return _return_value;
		}
		case 0x450d1b5d483217a6ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_get_all_outputs>(_method);
			auto _return_value = ::mmx::Transaction_get_all_outputs_return::create();
			_return_value->_ret_0 = get_all_outputs();
			return _return_value;
		}
		case 0xf68f41fd090736c1ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_get_output>(_method);
			auto _return_value = ::mmx::Transaction_get_output_return::create();
			_return_value->_ret_0 = get_output(_args->index);
			return _return_value;
		}
		case 0x8616c0b585da815bull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_get_solution>(_method);
			auto _return_value = ::mmx::Transaction_get_solution_return::create();
			_return_value->_ret_0 = get_solution(_args->index);
			return _return_value;
		}
		case 0x3273a3ea7264e4f8ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_is_signed>(_method);
			auto _return_value = ::mmx::Transaction_is_signed_return::create();
			_return_value->_ret_0 = is_signed();
			return _return_value;
		}
		case 0x16386c874106028aull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_is_valid>(_method);
			auto _return_value = ::mmx::Transaction_is_valid_return::create();
			_return_value->_ret_0 = is_valid();
			return _return_value;
		}
		case 0x441d6e2bfb07ec38ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_merge_sign>(_method);
			auto _return_value = ::mmx::Transaction_merge_sign_return::create();
			merge_sign(_args->tx);
			return _return_value;
		}
		case 0xdc3d9eed0e103932ull: {
			auto _args = std::static_pointer_cast<const ::mmx::TransactionBase_calc_cost>(_method);
			auto _return_value = ::mmx::TransactionBase_calc_cost_return::create();
			_return_value->_ret_0 = calc_cost(_args->params);
			return _return_value;
		}
		case 0xc2f558b6b824dcdull: {
			auto _args = std::static_pointer_cast<const ::mmx::TransactionBase_calc_hash>(_method);
			auto _return_value = ::mmx::TransactionBase_calc_hash_return::create();
			_return_value->_ret_0 = calc_hash();
			return _return_value;
		}
	}
	return nullptr;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::Transaction& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.version, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.id, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.inputs, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.outputs, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.exec_outputs, type_code, _field->code.data()); break;
			case 5: vnx::read(in, value.execute, type_code, _field->code.data()); break;
			case 6: vnx::read(in, value.solutions, type_code, _field->code.data()); break;
			case 7: vnx::read(in, value.deploy, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::Transaction& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_Transaction;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::Transaction>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.version);
	vnx::write(out, value.id, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.inputs, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.outputs, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.exec_outputs, type_code, type_code->fields[4].code.data());
	vnx::write(out, value.execute, type_code, type_code->fields[5].code.data());
	vnx::write(out, value.solutions, type_code, type_code->fields[6].code.data());
	vnx::write(out, value.deploy, type_code, type_code->fields[7].code.data());
}

void read(std::istream& in, ::mmx::Transaction& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::Transaction& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::Transaction& value) {
	value.accept(visitor);
}

} // vnx
