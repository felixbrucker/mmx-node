
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/Wallet_sign_off.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/Wallet_sign_off_return.hxx>
#include <mmx/spend_options_t.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 Wallet_sign_off::VNX_TYPE_HASH(0x232c89cf3ed4d5b1ull);
const vnx::Hash64 Wallet_sign_off::VNX_CODE_HASH(0x6dd15b32113a145aull);

vnx::Hash64 Wallet_sign_off::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Wallet_sign_off::get_type_name() const {
	return "mmx.Wallet.sign_off";
}

const vnx::TypeCode* Wallet_sign_off::get_type_code() const {
	return mmx::vnx_native_type_code_Wallet_sign_off;
}

std::shared_ptr<Wallet_sign_off> Wallet_sign_off::create() {
	return std::make_shared<Wallet_sign_off>();
}

std::shared_ptr<vnx::Value> Wallet_sign_off::clone() const {
	return std::make_shared<Wallet_sign_off>(*this);
}

void Wallet_sign_off::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Wallet_sign_off::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Wallet_sign_off::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_Wallet_sign_off;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, index);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, tx);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, options);
	_visitor.type_end(*_type_code);
}

void Wallet_sign_off::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.Wallet.sign_off\"";
	_out << ", \"index\": "; vnx::write(_out, index);
	_out << ", \"tx\": "; vnx::write(_out, tx);
	_out << ", \"options\": "; vnx::write(_out, options);
	_out << "}";
}

void Wallet_sign_off::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Wallet_sign_off::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.Wallet.sign_off";
	_object["index"] = index;
	_object["tx"] = tx;
	_object["options"] = options;
	return _object;
}

void Wallet_sign_off::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "index") {
			_entry.second.to(index);
		} else if(_entry.first == "options") {
			_entry.second.to(options);
		} else if(_entry.first == "tx") {
			_entry.second.to(tx);
		}
	}
}

vnx::Variant Wallet_sign_off::get_field(const std::string& _name) const {
	if(_name == "index") {
		return vnx::Variant(index);
	}
	if(_name == "tx") {
		return vnx::Variant(tx);
	}
	if(_name == "options") {
		return vnx::Variant(options);
	}
	return vnx::Variant();
}

void Wallet_sign_off::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "index") {
		_value.to(index);
	} else if(_name == "tx") {
		_value.to(tx);
	} else if(_name == "options") {
		_value.to(options);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Wallet_sign_off& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Wallet_sign_off& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Wallet_sign_off::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Wallet_sign_off::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.Wallet.sign_off";
	type_code->type_hash = vnx::Hash64(0x232c89cf3ed4d5b1ull);
	type_code->code_hash = vnx::Hash64(0x6dd15b32113a145aull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::mmx::Wallet_sign_off);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Wallet_sign_off>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::mmx::spend_options_t::static_get_type_code();
	type_code->is_const = true;
	type_code->return_type = ::mmx::Wallet_sign_off_return::static_get_type_code();
	type_code->fields.resize(3);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "index";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "tx";
		field.code = {16};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "options";
		field.code = {19, 0};
	}
	type_code->permission = "mmx.permission_e.SPENDING";
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::Wallet_sign_off& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.index, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.tx, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.options, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::Wallet_sign_off& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_Wallet_sign_off;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::Wallet_sign_off>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.index);
	vnx::write(out, value.tx, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.options, type_code, type_code->fields[2].code.data());
}

void read(std::istream& in, ::mmx::Wallet_sign_off& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::Wallet_sign_off& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::Wallet_sign_off& value) {
	value.accept(visitor);
}

} // vnx
