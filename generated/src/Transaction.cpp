
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/ChainParams.hxx>
#include <mmx/Contract.hxx>
#include <mmx/Operation.hxx>
#include <mmx/Solution.hxx>
#include <mmx/Transaction_add_input.hxx>
#include <mmx/Transaction_add_input_return.hxx>
#include <mmx/Transaction_add_output.hxx>
#include <mmx/Transaction_add_output_return.hxx>
#include <mmx/Transaction_calc_cost.hxx>
#include <mmx/Transaction_calc_cost_return.hxx>
#include <mmx/Transaction_calc_hash.hxx>
#include <mmx/Transaction_calc_hash_return.hxx>
#include <mmx/Transaction_finalize.hxx>
#include <mmx/Transaction_finalize_return.hxx>
#include <mmx/Transaction_get_all_inputs.hxx>
#include <mmx/Transaction_get_all_inputs_return.hxx>
#include <mmx/Transaction_get_all_operations.hxx>
#include <mmx/Transaction_get_all_operations_return.hxx>
#include <mmx/Transaction_get_all_outputs.hxx>
#include <mmx/Transaction_get_all_outputs_return.hxx>
#include <mmx/Transaction_get_balance.hxx>
#include <mmx/Transaction_get_balance_return.hxx>
#include <mmx/Transaction_get_inputs.hxx>
#include <mmx/Transaction_get_inputs_return.hxx>
#include <mmx/Transaction_get_output.hxx>
#include <mmx/Transaction_get_output_return.hxx>
#include <mmx/Transaction_get_outputs.hxx>
#include <mmx/Transaction_get_outputs_return.hxx>
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
#include <mmx/exec_result_t.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/tx_note_e.hxx>
#include <mmx/txin_t.hxx>
#include <mmx/txout_t.hxx>
#include <mmx/uint128.hpp>

#include <vnx/vnx.h>


namespace mmx {

const uint32_t Transaction::MAX_SOLUTIONS;

const vnx::Hash64 Transaction::VNX_TYPE_HASH(0xce0462acdceaa5bcull);
const vnx::Hash64 Transaction::VNX_CODE_HASH(0x76d3c6d8babaaf4ull);

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
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, expires);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, fee_ratio);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, static_cost);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, max_fee_amount);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, note);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, nonce);
	_visitor.type_field(_type_code->fields[8], 8); vnx::accept(_visitor, salt);
	_visitor.type_field(_type_code->fields[9], 9); vnx::accept(_visitor, sender);
	_visitor.type_field(_type_code->fields[10], 10); vnx::accept(_visitor, inputs);
	_visitor.type_field(_type_code->fields[11], 11); vnx::accept(_visitor, outputs);
	_visitor.type_field(_type_code->fields[12], 12); vnx::accept(_visitor, execute);
	_visitor.type_field(_type_code->fields[13], 13); vnx::accept(_visitor, solutions);
	_visitor.type_field(_type_code->fields[14], 14); vnx::accept(_visitor, deploy);
	_visitor.type_field(_type_code->fields[15], 15); vnx::accept(_visitor, parent);
	_visitor.type_field(_type_code->fields[16], 16); vnx::accept(_visitor, is_extendable);
	_visitor.type_field(_type_code->fields[17], 17); vnx::accept(_visitor, exec_result);
	_visitor.type_field(_type_code->fields[18], 18); vnx::accept(_visitor, content_hash);
	_visitor.type_end(*_type_code);
}

void Transaction::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.Transaction\"";
	_out << ", \"id\": "; vnx::write(_out, id);
	_out << ", \"version\": "; vnx::write(_out, version);
	_out << ", \"expires\": "; vnx::write(_out, expires);
	_out << ", \"fee_ratio\": "; vnx::write(_out, fee_ratio);
	_out << ", \"static_cost\": "; vnx::write(_out, static_cost);
	_out << ", \"max_fee_amount\": "; vnx::write(_out, max_fee_amount);
	_out << ", \"note\": "; vnx::write(_out, note);
	_out << ", \"nonce\": "; vnx::write(_out, nonce);
	_out << ", \"salt\": "; vnx::write(_out, salt);
	_out << ", \"sender\": "; vnx::write(_out, sender);
	_out << ", \"inputs\": "; vnx::write(_out, inputs);
	_out << ", \"outputs\": "; vnx::write(_out, outputs);
	_out << ", \"execute\": "; vnx::write(_out, execute);
	_out << ", \"solutions\": "; vnx::write(_out, solutions);
	_out << ", \"deploy\": "; vnx::write(_out, deploy);
	_out << ", \"parent\": "; vnx::write(_out, parent);
	_out << ", \"is_extendable\": "; vnx::write(_out, is_extendable);
	_out << ", \"exec_result\": "; vnx::write(_out, exec_result);
	_out << ", \"content_hash\": "; vnx::write(_out, content_hash);
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
	_object["expires"] = expires;
	_object["fee_ratio"] = fee_ratio;
	_object["static_cost"] = static_cost;
	_object["max_fee_amount"] = max_fee_amount;
	_object["note"] = note;
	_object["nonce"] = nonce;
	_object["salt"] = salt;
	_object["sender"] = sender;
	_object["inputs"] = inputs;
	_object["outputs"] = outputs;
	_object["execute"] = execute;
	_object["solutions"] = solutions;
	_object["deploy"] = deploy;
	_object["parent"] = parent;
	_object["is_extendable"] = is_extendable;
	_object["exec_result"] = exec_result;
	_object["content_hash"] = content_hash;
	return _object;
}

void Transaction::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "content_hash") {
			_entry.second.to(content_hash);
		} else if(_entry.first == "deploy") {
			_entry.second.to(deploy);
		} else if(_entry.first == "exec_result") {
			_entry.second.to(exec_result);
		} else if(_entry.first == "execute") {
			_entry.second.to(execute);
		} else if(_entry.first == "expires") {
			_entry.second.to(expires);
		} else if(_entry.first == "fee_ratio") {
			_entry.second.to(fee_ratio);
		} else if(_entry.first == "id") {
			_entry.second.to(id);
		} else if(_entry.first == "inputs") {
			_entry.second.to(inputs);
		} else if(_entry.first == "is_extendable") {
			_entry.second.to(is_extendable);
		} else if(_entry.first == "max_fee_amount") {
			_entry.second.to(max_fee_amount);
		} else if(_entry.first == "nonce") {
			_entry.second.to(nonce);
		} else if(_entry.first == "note") {
			_entry.second.to(note);
		} else if(_entry.first == "outputs") {
			_entry.second.to(outputs);
		} else if(_entry.first == "parent") {
			_entry.second.to(parent);
		} else if(_entry.first == "salt") {
			_entry.second.to(salt);
		} else if(_entry.first == "sender") {
			_entry.second.to(sender);
		} else if(_entry.first == "solutions") {
			_entry.second.to(solutions);
		} else if(_entry.first == "static_cost") {
			_entry.second.to(static_cost);
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
	if(_name == "expires") {
		return vnx::Variant(expires);
	}
	if(_name == "fee_ratio") {
		return vnx::Variant(fee_ratio);
	}
	if(_name == "static_cost") {
		return vnx::Variant(static_cost);
	}
	if(_name == "max_fee_amount") {
		return vnx::Variant(max_fee_amount);
	}
	if(_name == "note") {
		return vnx::Variant(note);
	}
	if(_name == "nonce") {
		return vnx::Variant(nonce);
	}
	if(_name == "salt") {
		return vnx::Variant(salt);
	}
	if(_name == "sender") {
		return vnx::Variant(sender);
	}
	if(_name == "inputs") {
		return vnx::Variant(inputs);
	}
	if(_name == "outputs") {
		return vnx::Variant(outputs);
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
	if(_name == "parent") {
		return vnx::Variant(parent);
	}
	if(_name == "is_extendable") {
		return vnx::Variant(is_extendable);
	}
	if(_name == "exec_result") {
		return vnx::Variant(exec_result);
	}
	if(_name == "content_hash") {
		return vnx::Variant(content_hash);
	}
	return vnx::Variant();
}

void Transaction::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "id") {
		_value.to(id);
	} else if(_name == "version") {
		_value.to(version);
	} else if(_name == "expires") {
		_value.to(expires);
	} else if(_name == "fee_ratio") {
		_value.to(fee_ratio);
	} else if(_name == "static_cost") {
		_value.to(static_cost);
	} else if(_name == "max_fee_amount") {
		_value.to(max_fee_amount);
	} else if(_name == "note") {
		_value.to(note);
	} else if(_name == "nonce") {
		_value.to(nonce);
	} else if(_name == "salt") {
		_value.to(salt);
	} else if(_name == "sender") {
		_value.to(sender);
	} else if(_name == "inputs") {
		_value.to(inputs);
	} else if(_name == "outputs") {
		_value.to(outputs);
	} else if(_name == "execute") {
		_value.to(execute);
	} else if(_name == "solutions") {
		_value.to(solutions);
	} else if(_name == "deploy") {
		_value.to(deploy);
	} else if(_name == "parent") {
		_value.to(parent);
	} else if(_name == "is_extendable") {
		_value.to(is_extendable);
	} else if(_name == "exec_result") {
		_value.to(exec_result);
	} else if(_name == "content_hash") {
		_value.to(content_hash);
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
	type_code->code_hash = vnx::Hash64(0x76d3c6d8babaaf4ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::Transaction);
	type_code->parents.resize(1);
	type_code->parents[0] = ::mmx::TransactionBase::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Transaction>(); };
	type_code->depends.resize(4);
	type_code->depends[0] = ::mmx::tx_note_e::static_get_type_code();
	type_code->depends[1] = ::mmx::txin_t::static_get_type_code();
	type_code->depends[2] = ::mmx::txout_t::static_get_type_code();
	type_code->depends[3] = ::mmx::exec_result_t::static_get_type_code();
	type_code->methods.resize(18);
	type_code->methods[0] = ::mmx::Transaction_add_input::static_get_type_code();
	type_code->methods[1] = ::mmx::Transaction_add_output::static_get_type_code();
	type_code->methods[2] = ::mmx::Transaction_calc_cost::static_get_type_code();
	type_code->methods[3] = ::mmx::Transaction_calc_hash::static_get_type_code();
	type_code->methods[4] = ::mmx::Transaction_finalize::static_get_type_code();
	type_code->methods[5] = ::mmx::Transaction_get_all_inputs::static_get_type_code();
	type_code->methods[6] = ::mmx::Transaction_get_all_operations::static_get_type_code();
	type_code->methods[7] = ::mmx::Transaction_get_all_outputs::static_get_type_code();
	type_code->methods[8] = ::mmx::Transaction_get_balance::static_get_type_code();
	type_code->methods[9] = ::mmx::Transaction_get_inputs::static_get_type_code();
	type_code->methods[10] = ::mmx::Transaction_get_output::static_get_type_code();
	type_code->methods[11] = ::mmx::Transaction_get_outputs::static_get_type_code();
	type_code->methods[12] = ::mmx::Transaction_get_solution::static_get_type_code();
	type_code->methods[13] = ::mmx::Transaction_is_signed::static_get_type_code();
	type_code->methods[14] = ::mmx::Transaction_is_valid::static_get_type_code();
	type_code->methods[15] = ::mmx::Transaction_merge_sign::static_get_type_code();
	type_code->methods[16] = ::mmx::TransactionBase_calc_cost::static_get_type_code();
	type_code->methods[17] = ::mmx::TransactionBase_calc_hash::static_get_type_code();
	type_code->fields.resize(19);
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
		field.data_size = 4;
		field.name = "expires";
		field.value = vnx::to_string(-1);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 4;
		field.name = "fee_ratio";
		field.value = vnx::to_string(1024);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[4];
		field.data_size = 4;
		field.name = "static_cost";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[5];
		field.data_size = 4;
		field.name = "max_fee_amount";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[6];
		field.is_extended = true;
		field.name = "note";
		field.code = {19, 0};
	}
	{
		auto& field = type_code->fields[7];
		field.data_size = 8;
		field.name = "nonce";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[8];
		field.is_extended = true;
		field.name = "salt";
		field.code = {33, 11, 32, 1};
	}
	{
		auto& field = type_code->fields[9];
		field.is_extended = true;
		field.name = "sender";
		field.code = {33, 11, 32, 1};
	}
	{
		auto& field = type_code->fields[10];
		field.is_extended = true;
		field.name = "inputs";
		field.code = {12, 19, 1};
	}
	{
		auto& field = type_code->fields[11];
		field.is_extended = true;
		field.name = "outputs";
		field.code = {12, 19, 2};
	}
	{
		auto& field = type_code->fields[12];
		field.is_extended = true;
		field.name = "execute";
		field.code = {12, 16};
	}
	{
		auto& field = type_code->fields[13];
		field.is_extended = true;
		field.name = "solutions";
		field.code = {12, 16};
	}
	{
		auto& field = type_code->fields[14];
		field.is_extended = true;
		field.name = "deploy";
		field.code = {16};
	}
	{
		auto& field = type_code->fields[15];
		field.is_extended = true;
		field.name = "parent";
		field.code = {16};
	}
	{
		auto& field = type_code->fields[16];
		field.data_size = 1;
		field.name = "is_extendable";
		field.code = {31};
	}
	{
		auto& field = type_code->fields[17];
		field.is_extended = true;
		field.name = "exec_result";
		field.code = {33, 19, 3};
	}
	{
		auto& field = type_code->fields[18];
		field.is_extended = true;
		field.name = "content_hash";
		field.code = {11, 32, 1};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> Transaction::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
		case 0xfa16a4d0e8a6af4cull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_add_input>(_method);
			auto _return_value = ::mmx::Transaction_add_input_return::create();
			add_input(_args->currency, _args->address, _args->amount);
			return _return_value;
		}
		case 0x479ef0d3de1f6ea3ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_add_output>(_method);
			auto _return_value = ::mmx::Transaction_add_output_return::create();
			add_output(_args->currency, _args->address, _args->amount);
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
			_return_value->_ret_0 = calc_hash(_args->full_hash);
			return _return_value;
		}
		case 0x75a626fc20f09905ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_finalize>(_method);
			auto _return_value = ::mmx::Transaction_finalize_return::create();
			finalize();
			return _return_value;
		}
		case 0xceffe2c73daf3a54ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_get_all_inputs>(_method);
			auto _return_value = ::mmx::Transaction_get_all_inputs_return::create();
			_return_value->_ret_0 = get_all_inputs();
			return _return_value;
		}
		case 0xd780f64dfbd92e32ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_get_all_operations>(_method);
			auto _return_value = ::mmx::Transaction_get_all_operations_return::create();
			_return_value->_ret_0 = get_all_operations();
			return _return_value;
		}
		case 0x450d1b5d483217a6ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_get_all_outputs>(_method);
			auto _return_value = ::mmx::Transaction_get_all_outputs_return::create();
			_return_value->_ret_0 = get_all_outputs();
			return _return_value;
		}
		case 0x74893cc5d1739496ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_get_balance>(_method);
			auto _return_value = ::mmx::Transaction_get_balance_return::create();
			_return_value->_ret_0 = get_balance();
			return _return_value;
		}
		case 0xe331dbd53bb4762eull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_get_inputs>(_method);
			auto _return_value = ::mmx::Transaction_get_inputs_return::create();
			_return_value->_ret_0 = get_inputs();
			return _return_value;
		}
		case 0xf68f41fd090736c1ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_get_output>(_method);
			auto _return_value = ::mmx::Transaction_get_output_return::create();
			_return_value->_ret_0 = get_output(_args->index);
			return _return_value;
		}
		case 0xa41facb815fc3dadull: {
			auto _args = std::static_pointer_cast<const ::mmx::Transaction_get_outputs>(_method);
			auto _return_value = ::mmx::Transaction_get_outputs_return::create();
			_return_value->_ret_0 = get_outputs();
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
			_return_value->_ret_0 = is_valid(_args->params);
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
			_return_value->_ret_0 = calc_hash(_args->full_hash);
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
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.expires, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.fee_ratio, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[4]) {
			vnx::read_value(_buf + _field->offset, value.static_cost, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[5]) {
			vnx::read_value(_buf + _field->offset, value.max_fee_amount, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[7]) {
			vnx::read_value(_buf + _field->offset, value.nonce, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[16]) {
			vnx::read_value(_buf + _field->offset, value.is_extendable, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.id, type_code, _field->code.data()); break;
			case 6: vnx::read(in, value.note, type_code, _field->code.data()); break;
			case 8: vnx::read(in, value.salt, type_code, _field->code.data()); break;
			case 9: vnx::read(in, value.sender, type_code, _field->code.data()); break;
			case 10: vnx::read(in, value.inputs, type_code, _field->code.data()); break;
			case 11: vnx::read(in, value.outputs, type_code, _field->code.data()); break;
			case 12: vnx::read(in, value.execute, type_code, _field->code.data()); break;
			case 13: vnx::read(in, value.solutions, type_code, _field->code.data()); break;
			case 14: vnx::read(in, value.deploy, type_code, _field->code.data()); break;
			case 15: vnx::read(in, value.parent, type_code, _field->code.data()); break;
			case 17: vnx::read(in, value.exec_result, type_code, _field->code.data()); break;
			case 18: vnx::read(in, value.content_hash, type_code, _field->code.data()); break;
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
	char* const _buf = out.write(29);
	vnx::write_value(_buf + 0, value.version);
	vnx::write_value(_buf + 4, value.expires);
	vnx::write_value(_buf + 8, value.fee_ratio);
	vnx::write_value(_buf + 12, value.static_cost);
	vnx::write_value(_buf + 16, value.max_fee_amount);
	vnx::write_value(_buf + 20, value.nonce);
	vnx::write_value(_buf + 28, value.is_extendable);
	vnx::write(out, value.id, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.note, type_code, type_code->fields[6].code.data());
	vnx::write(out, value.salt, type_code, type_code->fields[8].code.data());
	vnx::write(out, value.sender, type_code, type_code->fields[9].code.data());
	vnx::write(out, value.inputs, type_code, type_code->fields[10].code.data());
	vnx::write(out, value.outputs, type_code, type_code->fields[11].code.data());
	vnx::write(out, value.execute, type_code, type_code->fields[12].code.data());
	vnx::write(out, value.solutions, type_code, type_code->fields[13].code.data());
	vnx::write(out, value.deploy, type_code, type_code->fields[14].code.data());
	vnx::write(out, value.parent, type_code, type_code->fields[15].code.data());
	vnx::write(out, value.exec_result, type_code, type_code->fields[17].code.data());
	vnx::write(out, value.content_hash, type_code, type_code->fields[18].code.data());
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
