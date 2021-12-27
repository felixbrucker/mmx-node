
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_peer_info_t_HXX_
#define INCLUDE_mmx_peer_info_t_HXX_

#include <vnx/Type.h>
#include <mmx/package.hxx>


namespace mmx {

struct peer_info_t {
	
	
	std::string address;
	uint32_t height = 0;
	int64_t recv_timeout_ms = 0;
	uint64_t bytes_send = 0;
	uint64_t bytes_recv = 0;
	vnx::bool_t is_synced = 0;
	vnx::bool_t is_blocked = 0;
	vnx::bool_t is_outbound = 0;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xce0ff32e89625afbull;
	
	peer_info_t() {}
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	static std::shared_ptr<peer_info_t> create();
	std::shared_ptr<peer_info_t> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const peer_info_t& _value);
	friend std::istream& operator>>(std::istream& _in, peer_info_t& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace mmx


namespace vnx {

template<>
struct is_equivalent<::mmx::peer_info_t> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_mmx_peer_info_t_HXX_
