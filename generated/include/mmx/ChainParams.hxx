
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_ChainParams_HXX_
#define INCLUDE_mmx_ChainParams_HXX_

#include <mmx/package.hxx>
#include <mmx/ulong_fraction_t.hxx>
#include <vnx/Value.h>


namespace mmx {

class ChainParams : public ::vnx::Value {
public:
	
	uint32_t port = 0;
	uint32_t decimals = 6;
	uint32_t min_ksize = 30;
	uint32_t max_ksize = 42;
	uint32_t plot_filter = 10;
	uint32_t commit_delay = 18;
	uint32_t finality_delay = 6;
	uint32_t challenge_delay = 9;
	uint32_t challenge_interval = 48;
	uint32_t max_diff_adjust = 10;
	uint32_t min_vdf_segments = 320;
	uint32_t num_vdf_segments = 760;
	uint32_t max_vdf_segments = 1024;
	uint32_t max_tx_base_out = 10;
	uint32_t recursive_interval = 60480;
	uint32_t score_bits = 16;
	uint32_t score_target = 8192;
	uint32_t score_threshold = 65536;
	uint32_t block_weight = 32768;
	uint32_t dummy_weight = 8192;
	uint32_t weak_penalty = 65536;
	uint64_t min_reward = 200000;
	::mmx::ulong_fraction_t reward_factor;
	uint64_t time_diff_constant = 1000;
	uint64_t space_diff_constant = 100000000;
	uint64_t initial_time_diff = 10000;
	uint64_t initial_space_diff = 10;
	uint64_t min_txfee_io = 100;
	uint64_t min_txfee_sign = 1000;
	uint64_t min_txfee_exec = 10000;
	uint64_t max_block_cost = 10000000;
	vnx::float64_t block_time = 10;
	std::string vdf_seed;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x51bba8d28881e8e7ull;
	
	ChainParams() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<ChainParams> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const ChainParams& _value);
	friend std::istream& operator>>(std::istream& _in, ChainParams& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace mmx


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_ChainParams_HXX_
