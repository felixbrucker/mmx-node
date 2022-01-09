
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/ProofOfSpace.hxx>
#include <mmx/bls_pubkey_t.hpp>
#include <mmx/bls_signature_t.hpp>
#include <mmx/hash_t.hpp>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 ProofOfSpace::VNX_TYPE_HASH(0x9269760ad5fd0058ull);
const vnx::Hash64 ProofOfSpace::VNX_CODE_HASH(0xb5cc7bd4fa7e2894ull);

vnx::Hash64 ProofOfSpace::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string ProofOfSpace::get_type_name() const {
	return "mmx.ProofOfSpace";
}

const vnx::TypeCode* ProofOfSpace::get_type_code() const {
	return mmx::vnx_native_type_code_ProofOfSpace;
}

std::shared_ptr<ProofOfSpace> ProofOfSpace::create() {
	return std::make_shared<ProofOfSpace>();
}

std::shared_ptr<vnx::Value> ProofOfSpace::clone() const {
	return std::make_shared<ProofOfSpace>(*this);
}

void ProofOfSpace::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void ProofOfSpace::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void ProofOfSpace::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_ProofOfSpace;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, ksize);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, score);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, plot_id);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, proof_bytes);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, local_key);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, farmer_key);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, pool_key);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, local_sig);
	_visitor.type_end(*_type_code);
}

void ProofOfSpace::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.ProofOfSpace\"";
	_out << ", \"ksize\": "; vnx::write(_out, ksize);
	_out << ", \"score\": "; vnx::write(_out, score);
	_out << ", \"plot_id\": "; vnx::write(_out, plot_id);
	_out << ", \"proof_bytes\": "; vnx::write(_out, proof_bytes);
	_out << ", \"local_key\": "; vnx::write(_out, local_key);
	_out << ", \"farmer_key\": "; vnx::write(_out, farmer_key);
	_out << ", \"pool_key\": "; vnx::write(_out, pool_key);
	_out << ", \"local_sig\": "; vnx::write(_out, local_sig);
	_out << "}";
}

void ProofOfSpace::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object ProofOfSpace::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.ProofOfSpace";
	_object["ksize"] = ksize;
	_object["score"] = score;
	_object["plot_id"] = plot_id;
	_object["proof_bytes"] = proof_bytes;
	_object["local_key"] = local_key;
	_object["farmer_key"] = farmer_key;
	_object["pool_key"] = pool_key;
	_object["local_sig"] = local_sig;
	return _object;
}

void ProofOfSpace::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "farmer_key") {
			_entry.second.to(farmer_key);
		} else if(_entry.first == "ksize") {
			_entry.second.to(ksize);
		} else if(_entry.first == "local_key") {
			_entry.second.to(local_key);
		} else if(_entry.first == "local_sig") {
			_entry.second.to(local_sig);
		} else if(_entry.first == "plot_id") {
			_entry.second.to(plot_id);
		} else if(_entry.first == "pool_key") {
			_entry.second.to(pool_key);
		} else if(_entry.first == "proof_bytes") {
			_entry.second.to(proof_bytes);
		} else if(_entry.first == "score") {
			_entry.second.to(score);
		}
	}
}

vnx::Variant ProofOfSpace::get_field(const std::string& _name) const {
	if(_name == "ksize") {
		return vnx::Variant(ksize);
	}
	if(_name == "score") {
		return vnx::Variant(score);
	}
	if(_name == "plot_id") {
		return vnx::Variant(plot_id);
	}
	if(_name == "proof_bytes") {
		return vnx::Variant(proof_bytes);
	}
	if(_name == "local_key") {
		return vnx::Variant(local_key);
	}
	if(_name == "farmer_key") {
		return vnx::Variant(farmer_key);
	}
	if(_name == "pool_key") {
		return vnx::Variant(pool_key);
	}
	if(_name == "local_sig") {
		return vnx::Variant(local_sig);
	}
	return vnx::Variant();
}

void ProofOfSpace::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "ksize") {
		_value.to(ksize);
	} else if(_name == "score") {
		_value.to(score);
	} else if(_name == "plot_id") {
		_value.to(plot_id);
	} else if(_name == "proof_bytes") {
		_value.to(proof_bytes);
	} else if(_name == "local_key") {
		_value.to(local_key);
	} else if(_name == "farmer_key") {
		_value.to(farmer_key);
	} else if(_name == "pool_key") {
		_value.to(pool_key);
	} else if(_name == "local_sig") {
		_value.to(local_sig);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ProofOfSpace& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ProofOfSpace& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ProofOfSpace::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ProofOfSpace::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.ProofOfSpace";
	type_code->type_hash = vnx::Hash64(0x9269760ad5fd0058ull);
	type_code->code_hash = vnx::Hash64(0xb5cc7bd4fa7e2894ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::ProofOfSpace);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<ProofOfSpace>(); };
	type_code->fields.resize(8);
	{
		auto& field = type_code->fields[0];
		field.data_size = 1;
		field.name = "ksize";
		field.code = {1};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 8;
		field.name = "score";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "plot_id";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "proof_bytes";
		field.code = {12, 1};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "local_key";
		field.code = {11, 48, 1};
	}
	{
		auto& field = type_code->fields[5];
		field.is_extended = true;
		field.name = "farmer_key";
		field.code = {11, 48, 1};
	}
	{
		auto& field = type_code->fields[6];
		field.is_extended = true;
		field.name = "pool_key";
		field.code = {11, 48, 1};
	}
	{
		auto& field = type_code->fields[7];
		field.is_extended = true;
		field.name = "local_sig";
		field.code = {11, 96, 1};
	}
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::ProofOfSpace& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.ksize, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.score, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 2: vnx::read(in, value.plot_id, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.proof_bytes, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.local_key, type_code, _field->code.data()); break;
			case 5: vnx::read(in, value.farmer_key, type_code, _field->code.data()); break;
			case 6: vnx::read(in, value.pool_key, type_code, _field->code.data()); break;
			case 7: vnx::read(in, value.local_sig, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::ProofOfSpace& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_ProofOfSpace;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::ProofOfSpace>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(9);
	vnx::write_value(_buf + 0, value.ksize);
	vnx::write_value(_buf + 1, value.score);
	vnx::write(out, value.plot_id, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.proof_bytes, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.local_key, type_code, type_code->fields[4].code.data());
	vnx::write(out, value.farmer_key, type_code, type_code->fields[5].code.data());
	vnx::write(out, value.pool_key, type_code, type_code->fields[6].code.data());
	vnx::write(out, value.local_sig, type_code, type_code->fields[7].code.data());
}

void read(std::istream& in, ::mmx::ProofOfSpace& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::ProofOfSpace& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::ProofOfSpace& value) {
	value.accept(visitor);
}

} // vnx
