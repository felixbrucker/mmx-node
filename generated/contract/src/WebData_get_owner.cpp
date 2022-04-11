
// AUTO GENERATED by vnxcppcodegen

#include <mmx/contract/package.hxx>
#include <mmx/contract/WebData_get_owner.hxx>
#include <mmx/contract/WebData_get_owner_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {
namespace contract {


const vnx::Hash64 WebData_get_owner::VNX_TYPE_HASH(0x6641548a08e3081ull);
const vnx::Hash64 WebData_get_owner::VNX_CODE_HASH(0x72486ad0cee47d77ull);

vnx::Hash64 WebData_get_owner::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string WebData_get_owner::get_type_name() const {
	return "mmx.contract.WebData.get_owner";
}

const vnx::TypeCode* WebData_get_owner::get_type_code() const {
	return mmx::contract::vnx_native_type_code_WebData_get_owner;
}

std::shared_ptr<WebData_get_owner> WebData_get_owner::create() {
	return std::make_shared<WebData_get_owner>();
}

std::shared_ptr<vnx::Value> WebData_get_owner::clone() const {
	return std::make_shared<WebData_get_owner>(*this);
}

void WebData_get_owner::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void WebData_get_owner::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void WebData_get_owner::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::contract::vnx_native_type_code_WebData_get_owner;
	_visitor.type_begin(*_type_code);
	_visitor.type_end(*_type_code);
}

void WebData_get_owner::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.contract.WebData.get_owner\"";
	_out << "}";
}

void WebData_get_owner::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object WebData_get_owner::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.contract.WebData.get_owner";
	return _object;
}

void WebData_get_owner::from_object(const vnx::Object& _object) {
}

vnx::Variant WebData_get_owner::get_field(const std::string& _name) const {
	return vnx::Variant();
}

void WebData_get_owner::set_field(const std::string& _name, const vnx::Variant& _value) {
}

/// \private
std::ostream& operator<<(std::ostream& _out, const WebData_get_owner& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, WebData_get_owner& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* WebData_get_owner::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> WebData_get_owner::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.contract.WebData.get_owner";
	type_code->type_hash = vnx::Hash64(0x6641548a08e3081ull);
	type_code->code_hash = vnx::Hash64(0x72486ad0cee47d77ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::mmx::contract::WebData_get_owner);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<WebData_get_owner>(); };
	type_code->is_const = true;
	type_code->return_type = ::mmx::contract::WebData_get_owner_return::static_get_type_code();
	type_code->build();
	return type_code;
}


} // namespace mmx
} // namespace contract


namespace vnx {

void read(TypeInput& in, ::mmx::contract::WebData_get_owner& value, const TypeCode* type_code, const uint16_t* code) {
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
	in.read(type_code->total_field_size);
	if(type_code->is_matched) {
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::contract::WebData_get_owner& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::contract::vnx_native_type_code_WebData_get_owner;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::contract::WebData_get_owner>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
}

void read(std::istream& in, ::mmx::contract::WebData_get_owner& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::contract::WebData_get_owner& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::contract::WebData_get_owner& value) {
	value.accept(visitor);
}

} // vnx
