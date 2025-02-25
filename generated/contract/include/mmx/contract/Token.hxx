
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_contract_Token_HXX_
#define INCLUDE_mmx_contract_Token_HXX_

#include <mmx/contract/package.hxx>
#include <mmx/Context.hxx>
#include <mmx/Operation.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/contract/TokenBase.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/txout_t.hxx>
#include <mmx/ulong_fraction_t.hxx>


namespace mmx {
namespace contract {

class MMX_CONTRACT_EXPORT Token : public ::mmx::contract::TokenBase {
public:
	
	vnx::optional<::mmx::addr_t> owner;
	
	typedef ::mmx::contract::TokenBase Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x2d8835d6429431b2ull;
	
	Token() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	virtual vnx::bool_t is_valid() const override;
	virtual ::mmx::hash_t calc_hash(const vnx::bool_t& full_hash = 0) const override;
	virtual std::vector<::mmx::addr_t> get_dependency() const;
	virtual vnx::optional<::mmx::addr_t> get_owner() const;
	virtual std::vector<::mmx::txout_t> validate(std::shared_ptr<const ::mmx::Operation> operation = nullptr, std::shared_ptr<const ::mmx::Context> context = nullptr) const;
	virtual void transfer(const vnx::optional<::mmx::addr_t>& new_owner = nullptr);
	
	static std::shared_ptr<Token> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const Token& _value);
	friend std::istream& operator>>(std::istream& _in, Token& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method) override;
	
};

template<typename T>
void Token::accept_generic(T& _visitor) const {
	_visitor.template type_begin<Token>(6);
	_visitor.type_field("version", 0); _visitor.accept(version);
	_visitor.type_field("name", 1); _visitor.accept(name);
	_visitor.type_field("symbol", 2); _visitor.accept(symbol);
	_visitor.type_field("decimals", 3); _visitor.accept(decimals);
	_visitor.type_field("meta_data", 4); _visitor.accept(meta_data);
	_visitor.type_field("owner", 5); _visitor.accept(owner);
	_visitor.template type_end<Token>(6);
}


} // namespace mmx
} // namespace contract


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_contract_Token_HXX_
