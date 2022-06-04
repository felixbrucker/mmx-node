
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_Node_ASYNC_CLIENT_HXX_
#define INCLUDE_mmx_Node_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>
#include <mmx/Block.hxx>
#include <mmx/BlockHeader.hxx>
#include <mmx/ChainParams.hxx>
#include <mmx/Contract.hxx>
#include <mmx/NetworkInfo.hxx>
#include <mmx/ProofOfTime.hxx>
#include <mmx/ProofResponse.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/address_info_t.hxx>
#include <mmx/balance_t.hxx>
#include <mmx/bls_pubkey_t.hpp>
#include <mmx/exec_entry_t.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/offer_data_t.hxx>
#include <mmx/tx_entry_t.hxx>
#include <mmx/tx_info_t.hxx>
#include <mmx/uint128.hpp>
#include <mmx/vm/varptr_t.hpp>
#include <vnx/Module.h>
#include <vnx/TopicPtr.hpp>
#include <vnx/Variant.hpp>
#include <vnx/addons/HttpData.hxx>
#include <vnx/addons/HttpRequest.hxx>
#include <vnx/addons/HttpResponse.hxx>


namespace mmx {

class NodeAsyncClient : public vnx::AsyncClient {
public:
	NodeAsyncClient(const std::string& service_name);
	
	NodeAsyncClient(vnx::Hash64 service_addr);
	
	uint64_t get_params(
			const std::function<void(std::shared_ptr<const ::mmx::ChainParams>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::ChainParams>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_network_info(
			const std::function<void(std::shared_ptr<const ::mmx::NetworkInfo>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::NetworkInfo>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_genesis_hash(
			const std::function<void(const ::mmx::hash_t&)>& _callback = std::function<void(const ::mmx::hash_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_height(
			const std::function<void(const uint32_t&)>& _callback = std::function<void(const uint32_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_synced_height(
			const std::function<void(const vnx::optional<uint32_t>&)>& _callback = std::function<void(const vnx::optional<uint32_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_block(const ::mmx::hash_t& hash = ::mmx::hash_t(), 
			const std::function<void(std::shared_ptr<const ::mmx::Block>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::Block>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_block_at(const uint32_t& height = 0, 
			const std::function<void(std::shared_ptr<const ::mmx::Block>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::Block>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_header(const ::mmx::hash_t& hash = ::mmx::hash_t(), 
			const std::function<void(std::shared_ptr<const ::mmx::BlockHeader>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::BlockHeader>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_header_at(const uint32_t& height = 0, 
			const std::function<void(std::shared_ptr<const ::mmx::BlockHeader>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::BlockHeader>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_block_hash(const uint32_t& height = 0, 
			const std::function<void(const vnx::optional<::mmx::hash_t>&)>& _callback = std::function<void(const vnx::optional<::mmx::hash_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_tx_height(const ::mmx::hash_t& id = ::mmx::hash_t(), 
			const std::function<void(const vnx::optional<uint32_t>&)>& _callback = std::function<void(const vnx::optional<uint32_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_tx_info(const ::mmx::hash_t& id = ::mmx::hash_t(), 
			const std::function<void(const vnx::optional<::mmx::tx_info_t>&)>& _callback = std::function<void(const vnx::optional<::mmx::tx_info_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_tx_info_for(std::shared_ptr<const ::mmx::Transaction> tx = nullptr, 
			const std::function<void(const vnx::optional<::mmx::tx_info_t>&)>& _callback = std::function<void(const vnx::optional<::mmx::tx_info_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_tx_ids_at(const uint32_t& height = 0, 
			const std::function<void(const std::vector<::mmx::hash_t>&)>& _callback = std::function<void(const std::vector<::mmx::hash_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t is_revoked(const ::mmx::hash_t& txid = ::mmx::hash_t(), const ::mmx::addr_t& sender = ::mmx::addr_t(), 
			const std::function<void(const vnx::optional<::mmx::hash_t>&)>& _callback = std::function<void(const vnx::optional<::mmx::hash_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t add_block(std::shared_ptr<const ::mmx::Block> block = nullptr, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t add_transaction(std::shared_ptr<const ::mmx::Transaction> tx = nullptr, const vnx::bool_t& pre_validate = 0, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_contract(const ::mmx::addr_t& address = ::mmx::addr_t(), 
			const std::function<void(std::shared_ptr<const ::mmx::Contract>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::Contract>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_contract_for(const ::mmx::addr_t& address = ::mmx::addr_t(), 
			const std::function<void(std::shared_ptr<const ::mmx::Contract>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::Contract>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_contract_at(const ::mmx::addr_t& address = ::mmx::addr_t(), const ::mmx::hash_t& block_hash = ::mmx::hash_t(), 
			const std::function<void(std::shared_ptr<const ::mmx::Contract>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::Contract>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_contracts(const std::vector<::mmx::addr_t>& addresses = {}, 
			const std::function<void(const std::vector<std::shared_ptr<const ::mmx::Contract>>&)>& _callback = std::function<void(const std::vector<std::shared_ptr<const ::mmx::Contract>>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_contracts_by(const std::vector<::mmx::addr_t>& addresses = {}, 
			const std::function<void(const std::map<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>>&)>& _callback = std::function<void(const std::map<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_transaction(const ::mmx::hash_t& id = ::mmx::hash_t(), const vnx::bool_t& include_pending = 0, 
			const std::function<void(std::shared_ptr<const ::mmx::Transaction>)>& _callback = std::function<void(std::shared_ptr<const ::mmx::Transaction>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_transactions(const std::vector<::mmx::hash_t>& ids = {}, 
			const std::function<void(const std::vector<std::shared_ptr<const ::mmx::Transaction>>&)>& _callback = std::function<void(const std::vector<std::shared_ptr<const ::mmx::Transaction>>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_history(const std::vector<::mmx::addr_t>& addresses = {}, const int32_t& since = 0, 
			const std::function<void(const std::vector<::mmx::tx_entry_t>&)>& _callback = std::function<void(const std::vector<::mmx::tx_entry_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_balance(const ::mmx::addr_t& address = ::mmx::addr_t(), const ::mmx::addr_t& currency = ::mmx::addr_t(), const uint32_t& min_confirm = 1, 
			const std::function<void(const ::mmx::uint128&)>& _callback = std::function<void(const ::mmx::uint128&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_balances(const ::mmx::addr_t& address = ::mmx::addr_t(), const uint32_t& min_confirm = 1, 
			const std::function<void(const std::map<::mmx::addr_t, ::mmx::uint128>&)>& _callback = std::function<void(const std::map<::mmx::addr_t, ::mmx::uint128>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_contract_balances(const ::mmx::addr_t& address = ::mmx::addr_t(), const uint32_t& min_confirm = 1, 
			const std::function<void(const std::map<::mmx::addr_t, ::mmx::balance_t>&)>& _callback = std::function<void(const std::map<::mmx::addr_t, ::mmx::balance_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_total_balance(const std::vector<::mmx::addr_t>& addresses = {}, const ::mmx::addr_t& currency = ::mmx::addr_t(), const uint32_t& min_confirm = 1, 
			const std::function<void(const ::mmx::uint128&)>& _callback = std::function<void(const ::mmx::uint128&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_total_balances(const std::vector<::mmx::addr_t>& addresses = {}, const uint32_t& min_confirm = 1, 
			const std::function<void(const std::map<::mmx::addr_t, ::mmx::uint128>&)>& _callback = std::function<void(const std::map<::mmx::addr_t, ::mmx::uint128>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_all_balances(const std::vector<::mmx::addr_t>& addresses = {}, const uint32_t& min_confirm = 1, 
			const std::function<void(const std::map<std::pair<::mmx::addr_t, ::mmx::addr_t>, ::mmx::uint128>&)>& _callback = std::function<void(const std::map<std::pair<::mmx::addr_t, ::mmx::addr_t>, ::mmx::uint128>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_exec_history(const ::mmx::addr_t& address = ::mmx::addr_t(), const int32_t& since = 0, 
			const std::function<void(const std::vector<::mmx::exec_entry_t>&)>& _callback = std::function<void(const std::vector<::mmx::exec_entry_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t read_storage(const ::mmx::addr_t& contract = ::mmx::addr_t(), const uint32_t& height = -1, 
			const std::function<void(const std::map<std::string, ::mmx::vm::varptr_t>&)>& _callback = std::function<void(const std::map<std::string, ::mmx::vm::varptr_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t dump_storage(const ::mmx::addr_t& contract = ::mmx::addr_t(), const uint32_t& height = -1, 
			const std::function<void(const std::map<uint64_t, ::mmx::vm::varptr_t>&)>& _callback = std::function<void(const std::map<uint64_t, ::mmx::vm::varptr_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t read_storage_var(const ::mmx::addr_t& contract = ::mmx::addr_t(), const uint64_t& address = 0, const uint32_t& height = -1, 
			const std::function<void(const ::mmx::vm::varptr_t&)>& _callback = std::function<void(const ::mmx::vm::varptr_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t read_storage_field(const ::mmx::addr_t& contract = ::mmx::addr_t(), const std::string& name = "", const uint32_t& height = -1, 
			const std::function<void(const std::pair<::mmx::vm::varptr_t, uint64_t>&)>& _callback = std::function<void(const std::pair<::mmx::vm::varptr_t, uint64_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t read_storage_array(const ::mmx::addr_t& contract = ::mmx::addr_t(), const uint64_t& address = 0, const uint32_t& height = -1, 
			const std::function<void(const std::vector<::mmx::vm::varptr_t>&)>& _callback = std::function<void(const std::vector<::mmx::vm::varptr_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t read_storage_map(const ::mmx::addr_t& contract = ::mmx::addr_t(), const uint64_t& address = 0, const uint32_t& height = -1, 
			const std::function<void(const std::map<::mmx::vm::varptr_t, ::mmx::vm::varptr_t>&)>& _callback = std::function<void(const std::map<::mmx::vm::varptr_t, ::mmx::vm::varptr_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t call_contract(const ::mmx::addr_t& address = ::mmx::addr_t(), const std::string& method = "", const std::vector<::vnx::Variant>& args = {}, 
			const std::function<void(const ::vnx::Variant&)>& _callback = std::function<void(const ::vnx::Variant&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_address_info(const ::mmx::addr_t& address = ::mmx::addr_t(), 
			const std::function<void(const ::mmx::address_info_t&)>& _callback = std::function<void(const ::mmx::address_info_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_virtual_plots_for(const ::mmx::bls_pubkey_t& farmer_key = ::mmx::bls_pubkey_t(), 
			const std::function<void(const std::vector<std::pair<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>>>&)>& _callback = std::function<void(const std::vector<std::pair<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>>>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_virtual_plot_balance(const ::mmx::addr_t& plot_id = ::mmx::addr_t(), const vnx::optional<::mmx::hash_t>& block_hash = nullptr, 
			const std::function<void(const uint64_t&)>& _callback = std::function<void(const uint64_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_offers(const uint32_t& since = 0, const vnx::bool_t& is_open = 0, const vnx::bool_t& is_covered = 0, 
			const std::function<void(const std::vector<::mmx::offer_data_t>&)>& _callback = std::function<void(const std::vector<::mmx::offer_data_t>&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_total_supply(const ::mmx::addr_t& currency = ::mmx::addr_t(), 
			const std::function<void(const ::mmx::uint128&)>& _callback = std::function<void(const ::mmx::uint128&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t start_sync(const vnx::bool_t& force = 0, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t http_request(std::shared_ptr<const ::vnx::addons::HttpRequest> request = nullptr, const std::string& sub_path = "", 
			const std::function<void(std::shared_ptr<const ::vnx::addons::HttpResponse>)>& _callback = std::function<void(std::shared_ptr<const ::vnx::addons::HttpResponse>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t http_request_chunk(std::shared_ptr<const ::vnx::addons::HttpRequest> request = nullptr, const std::string& sub_path = "", const int64_t& offset = 0, const int64_t& max_bytes = 0, 
			const std::function<void(std::shared_ptr<const ::vnx::addons::HttpData>)>& _callback = std::function<void(std::shared_ptr<const ::vnx::addons::HttpData>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_get_config_object(
			const std::function<void(const ::vnx::Object&)>& _callback = std::function<void(const ::vnx::Object&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_get_config(const std::string& name = "", 
			const std::function<void(const ::vnx::Variant&)>& _callback = std::function<void(const ::vnx::Variant&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_set_config_object(const ::vnx::Object& config = ::vnx::Object(), 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_set_config(const std::string& name = "", const ::vnx::Variant& value = ::vnx::Variant(), 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_get_type_code(
			const std::function<void(const ::vnx::TypeCode&)>& _callback = std::function<void(const ::vnx::TypeCode&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_get_module_info(
			const std::function<void(std::shared_ptr<const ::vnx::ModuleInfo>)>& _callback = std::function<void(std::shared_ptr<const ::vnx::ModuleInfo>)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_restart(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_stop(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_self_test(
			const std::function<void(const vnx::bool_t&)>& _callback = std::function<void(const vnx::bool_t&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
protected:
	int32_t vnx_purge_request(uint64_t _request_id, const vnx::exception& _ex) override;
	
	int32_t vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) override;
	
private:
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::ChainParams>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_params;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::NetworkInfo>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_network_info;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::hash_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_genesis_hash;
	std::unordered_map<uint64_t, std::pair<std::function<void(const uint32_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_height;
	std::unordered_map<uint64_t, std::pair<std::function<void(const vnx::optional<uint32_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_synced_height;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::Block>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_block;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::Block>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_block_at;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::BlockHeader>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_header;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::BlockHeader>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_header_at;
	std::unordered_map<uint64_t, std::pair<std::function<void(const vnx::optional<::mmx::hash_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_block_hash;
	std::unordered_map<uint64_t, std::pair<std::function<void(const vnx::optional<uint32_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_tx_height;
	std::unordered_map<uint64_t, std::pair<std::function<void(const vnx::optional<::mmx::tx_info_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_tx_info;
	std::unordered_map<uint64_t, std::pair<std::function<void(const vnx::optional<::mmx::tx_info_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_tx_info_for;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::hash_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_tx_ids_at;
	std::unordered_map<uint64_t, std::pair<std::function<void(const vnx::optional<::mmx::hash_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_is_revoked;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_add_block;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_add_transaction;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::Contract>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_contract;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::Contract>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_contract_for;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::Contract>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_contract_at;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<std::shared_ptr<const ::mmx::Contract>>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_contracts;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_contracts_by;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::mmx::Transaction>)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_transaction;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<std::shared_ptr<const ::mmx::Transaction>>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_transactions;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::tx_entry_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_history;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::uint128&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_balance;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<::mmx::addr_t, ::mmx::uint128>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_balances;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<::mmx::addr_t, ::mmx::balance_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_contract_balances;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::uint128&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_total_balance;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<::mmx::addr_t, ::mmx::uint128>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_total_balances;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<std::pair<::mmx::addr_t, ::mmx::addr_t>, ::mmx::uint128>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_all_balances;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::exec_entry_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_exec_history;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<std::string, ::mmx::vm::varptr_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_read_storage;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<uint64_t, ::mmx::vm::varptr_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_dump_storage;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::vm::varptr_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_read_storage_var;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::pair<::mmx::vm::varptr_t, uint64_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_read_storage_field;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::vm::varptr_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_read_storage_array;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::map<::mmx::vm::varptr_t, ::mmx::vm::varptr_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_read_storage_map;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::vnx::Variant&)>, std::function<void(const vnx::exception&)>>> vnx_queue_call_contract;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::address_info_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_address_info;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<std::pair<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>>>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_virtual_plots_for;
	std::unordered_map<uint64_t, std::pair<std::function<void(const uint64_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_virtual_plot_balance;
	std::unordered_map<uint64_t, std::pair<std::function<void(const std::vector<::mmx::offer_data_t>&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_offers;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::mmx::uint128&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_total_supply;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_start_sync;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::vnx::addons::HttpResponse>)>, std::function<void(const vnx::exception&)>>> vnx_queue_http_request;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::vnx::addons::HttpData>)>, std::function<void(const vnx::exception&)>>> vnx_queue_http_request_chunk;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::vnx::Object&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_config_object;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::vnx::Variant&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_config;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_set_config_object;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_set_config;
	std::unordered_map<uint64_t, std::pair<std::function<void(const ::vnx::TypeCode&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_type_code;
	std::unordered_map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::vnx::ModuleInfo>)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_module_info;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_restart;
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_stop;
	std::unordered_map<uint64_t, std::pair<std::function<void(const vnx::bool_t&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_self_test;
	
};


} // namespace mmx

#endif // INCLUDE_mmx_Node_ASYNC_CLIENT_HXX_
