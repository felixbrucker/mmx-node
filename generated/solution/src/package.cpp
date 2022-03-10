
// AUTO GENERATED by vnxcppcodegen

#include <mmx/solution/MultiSig.hxx>
#include <mmx/solution/MultiSig_is_valid.hxx>
#include <mmx/solution/MultiSig_is_valid_return.hxx>
#include <mmx/solution/PubKey.hxx>
#include <mmx/solution/PubKey_is_valid.hxx>
#include <mmx/solution/PubKey_is_valid_return.hxx>

#include <mmx/solution/package.hxx>
#include <vnx/vnx.h>



namespace vnx {

const TypeCode* type<::mmx::solution::MultiSig>::get_type_code() {
	return mmx::solution::vnx_native_type_code_MultiSig;
}

void type<::mmx::solution::MultiSig>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::solution::MultiSig());
}

void type<::mmx::solution::MultiSig>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::solution::MultiSig& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::solution::MultiSig_is_valid>::get_type_code() {
	return mmx::solution::vnx_native_type_code_MultiSig_is_valid;
}

void type<::mmx::solution::MultiSig_is_valid>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::solution::MultiSig_is_valid());
}

void type<::mmx::solution::MultiSig_is_valid>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::solution::MultiSig_is_valid& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::solution::MultiSig_is_valid_return>::get_type_code() {
	return mmx::solution::vnx_native_type_code_MultiSig_is_valid_return;
}

void type<::mmx::solution::MultiSig_is_valid_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::solution::MultiSig_is_valid_return());
}

void type<::mmx::solution::MultiSig_is_valid_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::solution::MultiSig_is_valid_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::solution::PubKey>::get_type_code() {
	return mmx::solution::vnx_native_type_code_PubKey;
}

void type<::mmx::solution::PubKey>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::solution::PubKey());
}

void type<::mmx::solution::PubKey>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::solution::PubKey& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::solution::PubKey_is_valid>::get_type_code() {
	return mmx::solution::vnx_native_type_code_PubKey_is_valid;
}

void type<::mmx::solution::PubKey_is_valid>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::solution::PubKey_is_valid());
}

void type<::mmx::solution::PubKey_is_valid>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::solution::PubKey_is_valid& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::solution::PubKey_is_valid_return>::get_type_code() {
	return mmx::solution::vnx_native_type_code_PubKey_is_valid_return;
}

void type<::mmx::solution::PubKey_is_valid_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::solution::PubKey_is_valid_return());
}

void type<::mmx::solution::PubKey_is_valid_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::solution::PubKey_is_valid_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}


} // namespace vnx


namespace mmx {
namespace solution {


static void register_all_types() {
	vnx::register_type_code(::mmx::solution::MultiSig::static_create_type_code());
	vnx::register_type_code(::mmx::solution::MultiSig_is_valid::static_create_type_code());
	vnx::register_type_code(::mmx::solution::MultiSig_is_valid_return::static_create_type_code());
	vnx::register_type_code(::mmx::solution::PubKey::static_create_type_code());
	vnx::register_type_code(::mmx::solution::PubKey_is_valid::static_create_type_code());
	vnx::register_type_code(::mmx::solution::PubKey_is_valid_return::static_create_type_code());
}

static struct vnx_static_init {
	vnx_static_init() {
		register_all_types();
	}
} vnx_static_init_;

const vnx::TypeCode* const vnx_native_type_code_MultiSig = vnx::get_type_code(vnx::Hash64(0x64ffa2f8fc8dffd1ull));
const vnx::TypeCode* const vnx_native_type_code_MultiSig_is_valid = vnx::get_type_code(vnx::Hash64(0x7efc69b79102b1b3ull));
const vnx::TypeCode* const vnx_native_type_code_MultiSig_is_valid_return = vnx::get_type_code(vnx::Hash64(0x1a2973981d777bdfull));
const vnx::TypeCode* const vnx_native_type_code_PubKey = vnx::get_type_code(vnx::Hash64(0xe47af6fcacfcefa5ull));
const vnx::TypeCode* const vnx_native_type_code_PubKey_is_valid = vnx::get_type_code(vnx::Hash64(0x7fd0e49a6760a40aull));
const vnx::TypeCode* const vnx_native_type_code_PubKey_is_valid_return = vnx::get_type_code(vnx::Hash64(0xf9ef9f0cf08f3d6eull));

} // namespace mmx
} // namespace solution
