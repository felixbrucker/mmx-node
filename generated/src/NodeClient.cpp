
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/NodeClient.hxx>
#include <mmx/Block.hxx>
#include <mmx/BlockHeader.hxx>
#include <mmx/ChainParams.hxx>
#include <mmx/Contract.hxx>
#include <mmx/NetworkInfo.hxx>
#include <mmx/Node_add_block.hxx>
#include <mmx/Node_add_block_return.hxx>
#include <mmx/Node_add_transaction.hxx>
#include <mmx/Node_add_transaction_return.hxx>
#include <mmx/Node_get_balance.hxx>
#include <mmx/Node_get_balance_return.hxx>
#include <mmx/Node_get_balances.hxx>
#include <mmx/Node_get_balances_return.hxx>
#include <mmx/Node_get_block.hxx>
#include <mmx/Node_get_block_return.hxx>
#include <mmx/Node_get_block_at.hxx>
#include <mmx/Node_get_block_at_return.hxx>
#include <mmx/Node_get_block_hash.hxx>
#include <mmx/Node_get_block_hash_return.hxx>
#include <mmx/Node_get_contract.hxx>
#include <mmx/Node_get_contract_return.hxx>
#include <mmx/Node_get_contract_for.hxx>
#include <mmx/Node_get_contract_for_return.hxx>
#include <mmx/Node_get_contracts.hxx>
#include <mmx/Node_get_contracts_return.hxx>
#include <mmx/Node_get_contracts_owned.hxx>
#include <mmx/Node_get_contracts_owned_return.hxx>
#include <mmx/Node_get_header.hxx>
#include <mmx/Node_get_header_return.hxx>
#include <mmx/Node_get_header_at.hxx>
#include <mmx/Node_get_header_at_return.hxx>
#include <mmx/Node_get_height.hxx>
#include <mmx/Node_get_height_return.hxx>
#include <mmx/Node_get_history_for.hxx>
#include <mmx/Node_get_history_for_return.hxx>
#include <mmx/Node_get_network_info.hxx>
#include <mmx/Node_get_network_info_return.hxx>
#include <mmx/Node_get_params.hxx>
#include <mmx/Node_get_params_return.hxx>
#include <mmx/Node_get_spendable_utxo_list.hxx>
#include <mmx/Node_get_spendable_utxo_list_return.hxx>
#include <mmx/Node_get_stxo_list.hxx>
#include <mmx/Node_get_stxo_list_return.hxx>
#include <mmx/Node_get_synced_height.hxx>
#include <mmx/Node_get_synced_height_return.hxx>
#include <mmx/Node_get_total_balance.hxx>
#include <mmx/Node_get_total_balance_return.hxx>
#include <mmx/Node_get_total_balances.hxx>
#include <mmx/Node_get_total_balances_return.hxx>
#include <mmx/Node_get_total_supply.hxx>
#include <mmx/Node_get_total_supply_return.hxx>
#include <mmx/Node_get_transaction.hxx>
#include <mmx/Node_get_transaction_return.hxx>
#include <mmx/Node_get_transactions.hxx>
#include <mmx/Node_get_transactions_return.hxx>
#include <mmx/Node_get_tx_height.hxx>
#include <mmx/Node_get_tx_height_return.hxx>
#include <mmx/Node_get_tx_ids_at.hxx>
#include <mmx/Node_get_tx_ids_at_return.hxx>
#include <mmx/Node_get_tx_info.hxx>
#include <mmx/Node_get_tx_info_return.hxx>
#include <mmx/Node_get_txo_info.hxx>
#include <mmx/Node_get_txo_info_return.hxx>
#include <mmx/Node_get_txo_infos.hxx>
#include <mmx/Node_get_txo_infos_return.hxx>
#include <mmx/Node_get_utxo_list.hxx>
#include <mmx/Node_get_utxo_list_return.hxx>
#include <mmx/Node_get_utxo_list_for.hxx>
#include <mmx/Node_get_utxo_list_for_return.hxx>
#include <mmx/Node_get_virtual_plot_balance.hxx>
#include <mmx/Node_get_virtual_plot_balance_return.hxx>
#include <mmx/Node_start_sync.hxx>
#include <mmx/Node_start_sync_return.hxx>
#include <mmx/ProofOfTime.hxx>
#include <mmx/ProofResponse.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/balance_t.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/stxo_entry_t.hxx>
#include <mmx/tx_entry_t.hxx>
#include <mmx/tx_info_t.hxx>
#include <mmx/txio_key_t.hxx>
#include <mmx/txo_info_t.hxx>
#include <mmx/uint128.hpp>
#include <mmx/utxo_entry_t.hxx>
#include <vnx/Module.h>
#include <vnx/ModuleInterface_vnx_get_config.hxx>
#include <vnx/ModuleInterface_vnx_get_config_return.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info_return.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code_return.hxx>
#include <vnx/ModuleInterface_vnx_restart.hxx>
#include <vnx/ModuleInterface_vnx_restart_return.hxx>
#include <vnx/ModuleInterface_vnx_self_test.hxx>
#include <vnx/ModuleInterface_vnx_self_test_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config.hxx>
#include <vnx/ModuleInterface_vnx_set_config_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_stop.hxx>
#include <vnx/ModuleInterface_vnx_stop_return.hxx>
#include <vnx/TopicPtr.hpp>
#include <vnx/addons/HttpComponent_http_request.hxx>
#include <vnx/addons/HttpComponent_http_request_return.hxx>
#include <vnx/addons/HttpComponent_http_request_chunk.hxx>
#include <vnx/addons/HttpComponent_http_request_chunk_return.hxx>
#include <vnx/addons/HttpData.hxx>
#include <vnx/addons/HttpRequest.hxx>
#include <vnx/addons/HttpResponse.hxx>

#include <vnx/Generic.hxx>
#include <vnx/vnx.h>


namespace mmx {

NodeClient::NodeClient(const std::string& service_name)
	:	Client::Client(vnx::Hash64(service_name))
{
}

NodeClient::NodeClient(vnx::Hash64 service_addr)
	:	Client::Client(service_addr)
{
}

std::shared_ptr<const ::mmx::ChainParams> NodeClient::get_params() {
	auto _method = ::mmx::Node_get_params::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_params_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::ChainParams>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::shared_ptr<const ::mmx::NetworkInfo> NodeClient::get_network_info() {
	auto _method = ::mmx::Node_get_network_info::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_network_info_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::NetworkInfo>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

uint32_t NodeClient::get_height() {
	auto _method = ::mmx::Node_get_height::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_height_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<uint32_t>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

vnx::optional<uint32_t> NodeClient::get_synced_height() {
	auto _method = ::mmx::Node_get_synced_height::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_synced_height_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<vnx::optional<uint32_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::shared_ptr<const ::mmx::Block> NodeClient::get_block(const ::mmx::hash_t& hash) {
	auto _method = ::mmx::Node_get_block::create();
	_method->hash = hash;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_block_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::Block>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::shared_ptr<const ::mmx::Block> NodeClient::get_block_at(const uint32_t& height) {
	auto _method = ::mmx::Node_get_block_at::create();
	_method->height = height;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_block_at_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::Block>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::shared_ptr<const ::mmx::BlockHeader> NodeClient::get_header(const ::mmx::hash_t& hash) {
	auto _method = ::mmx::Node_get_header::create();
	_method->hash = hash;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_header_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::BlockHeader>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::shared_ptr<const ::mmx::BlockHeader> NodeClient::get_header_at(const uint32_t& height) {
	auto _method = ::mmx::Node_get_header_at::create();
	_method->height = height;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_header_at_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::BlockHeader>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

vnx::optional<::mmx::hash_t> NodeClient::get_block_hash(const uint32_t& height) {
	auto _method = ::mmx::Node_get_block_hash::create();
	_method->height = height;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_block_hash_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<vnx::optional<::mmx::hash_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

vnx::optional<::mmx::txo_info_t> NodeClient::get_txo_info(const ::mmx::txio_key_t& key) {
	auto _method = ::mmx::Node_get_txo_info::create();
	_method->key = key;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_txo_info_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<vnx::optional<::mmx::txo_info_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::vector<vnx::optional<::mmx::txo_info_t>> NodeClient::get_txo_infos(const std::vector<::mmx::txio_key_t>& keys) {
	auto _method = ::mmx::Node_get_txo_infos::create();
	_method->keys = keys;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_txo_infos_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<vnx::optional<::mmx::txo_info_t>>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

vnx::optional<uint32_t> NodeClient::get_tx_height(const ::mmx::hash_t& id) {
	auto _method = ::mmx::Node_get_tx_height::create();
	_method->id = id;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_tx_height_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<vnx::optional<uint32_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

vnx::optional<::mmx::tx_info_t> NodeClient::get_tx_info(const ::mmx::hash_t& id) {
	auto _method = ::mmx::Node_get_tx_info::create();
	_method->id = id;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_tx_info_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<vnx::optional<::mmx::tx_info_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::vector<::mmx::hash_t> NodeClient::get_tx_ids_at(const uint32_t& height) {
	auto _method = ::mmx::Node_get_tx_ids_at::create();
	_method->height = height;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_tx_ids_at_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::hash_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

void NodeClient::add_block(std::shared_ptr<const ::mmx::Block> block) {
	auto _method = ::mmx::Node_add_block::create();
	_method->block = block;
	vnx_request(_method, false);
}

void NodeClient::add_block_async(std::shared_ptr<const ::mmx::Block> block) {
	auto _method = ::mmx::Node_add_block::create();
	_method->block = block;
	vnx_request(_method, true);
}

void NodeClient::add_transaction(std::shared_ptr<const ::mmx::Transaction> tx, const vnx::bool_t& pre_validate) {
	auto _method = ::mmx::Node_add_transaction::create();
	_method->tx = tx;
	_method->pre_validate = pre_validate;
	vnx_request(_method, false);
}

void NodeClient::add_transaction_async(std::shared_ptr<const ::mmx::Transaction> tx, const vnx::bool_t& pre_validate) {
	auto _method = ::mmx::Node_add_transaction::create();
	_method->tx = tx;
	_method->pre_validate = pre_validate;
	vnx_request(_method, true);
}

std::shared_ptr<const ::mmx::Contract> NodeClient::get_contract(const ::mmx::addr_t& address) {
	auto _method = ::mmx::Node_get_contract::create();
	_method->address = address;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_contract_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::Contract>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::shared_ptr<const ::mmx::Contract> NodeClient::get_contract_for(const ::mmx::addr_t& address) {
	auto _method = ::mmx::Node_get_contract_for::create();
	_method->address = address;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_contract_for_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::Contract>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::vector<std::shared_ptr<const ::mmx::Contract>> NodeClient::get_contracts(const std::vector<::mmx::addr_t>& addresses) {
	auto _method = ::mmx::Node_get_contracts::create();
	_method->addresses = addresses;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_contracts_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<std::shared_ptr<const ::mmx::Contract>>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::map<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>> NodeClient::get_contracts_owned(const std::vector<::mmx::addr_t>& owners) {
	auto _method = ::mmx::Node_get_contracts_owned::create();
	_method->owners = owners;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_contracts_owned_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::map<::mmx::addr_t, std::shared_ptr<const ::mmx::Contract>>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::shared_ptr<const ::mmx::Transaction> NodeClient::get_transaction(const ::mmx::hash_t& id, const vnx::bool_t& include_pending) {
	auto _method = ::mmx::Node_get_transaction::create();
	_method->id = id;
	_method->include_pending = include_pending;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_transaction_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::Transaction>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::vector<std::shared_ptr<const ::mmx::Transaction>> NodeClient::get_transactions(const std::vector<::mmx::hash_t>& ids) {
	auto _method = ::mmx::Node_get_transactions::create();
	_method->ids = ids;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_transactions_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<std::shared_ptr<const ::mmx::Transaction>>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::vector<::mmx::tx_entry_t> NodeClient::get_history_for(const std::vector<::mmx::addr_t>& addresses, const int32_t& since) {
	auto _method = ::mmx::Node_get_history_for::create();
	_method->addresses = addresses;
	_method->since = since;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_history_for_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::tx_entry_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

::mmx::uint128 NodeClient::get_balance(const ::mmx::addr_t& address, const ::mmx::addr_t& currency, const uint32_t& min_confirm) {
	auto _method = ::mmx::Node_get_balance::create();
	_method->address = address;
	_method->currency = currency;
	_method->min_confirm = min_confirm;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_balance_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::mmx::uint128>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::map<::mmx::addr_t, ::mmx::balance_t> NodeClient::get_balances(const ::mmx::addr_t& address, const uint32_t& min_confirm) {
	auto _method = ::mmx::Node_get_balances::create();
	_method->address = address;
	_method->min_confirm = min_confirm;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_balances_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::map<::mmx::addr_t, ::mmx::balance_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

::mmx::uint128 NodeClient::get_total_balance(const std::vector<::mmx::addr_t>& addresses, const ::mmx::addr_t& currency, const uint32_t& min_confirm) {
	auto _method = ::mmx::Node_get_total_balance::create();
	_method->addresses = addresses;
	_method->currency = currency;
	_method->min_confirm = min_confirm;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_total_balance_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::mmx::uint128>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::map<::mmx::addr_t, ::mmx::uint128> NodeClient::get_total_balances(const std::vector<::mmx::addr_t>& addresses, const uint32_t& min_confirm) {
	auto _method = ::mmx::Node_get_total_balances::create();
	_method->addresses = addresses;
	_method->min_confirm = min_confirm;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_total_balances_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::map<::mmx::addr_t, ::mmx::uint128>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

::mmx::uint128 NodeClient::get_virtual_plot_balance(const ::mmx::addr_t& plot_id, const ::mmx::hash_t& block_hash) {
	auto _method = ::mmx::Node_get_virtual_plot_balance::create();
	_method->plot_id = plot_id;
	_method->block_hash = block_hash;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_virtual_plot_balance_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::mmx::uint128>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

::mmx::uint128 NodeClient::get_total_supply(const ::mmx::addr_t& currency) {
	auto _method = ::mmx::Node_get_total_supply::create();
	_method->currency = currency;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_total_supply_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::mmx::uint128>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::vector<::mmx::utxo_entry_t> NodeClient::get_utxo_list(const std::vector<::mmx::addr_t>& addresses, const uint32_t& min_confirm, const uint32_t& since) {
	auto _method = ::mmx::Node_get_utxo_list::create();
	_method->addresses = addresses;
	_method->min_confirm = min_confirm;
	_method->since = since;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_utxo_list_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::utxo_entry_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::vector<::mmx::utxo_entry_t> NodeClient::get_utxo_list_for(const std::vector<::mmx::addr_t>& addresses, const ::mmx::addr_t& currency, const uint32_t& min_confirm, const uint32_t& since) {
	auto _method = ::mmx::Node_get_utxo_list_for::create();
	_method->addresses = addresses;
	_method->currency = currency;
	_method->min_confirm = min_confirm;
	_method->since = since;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_utxo_list_for_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::utxo_entry_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::vector<::mmx::utxo_entry_t> NodeClient::get_spendable_utxo_list(const std::vector<::mmx::addr_t>& addresses, const uint32_t& min_confirm, const uint32_t& since) {
	auto _method = ::mmx::Node_get_spendable_utxo_list::create();
	_method->addresses = addresses;
	_method->min_confirm = min_confirm;
	_method->since = since;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_spendable_utxo_list_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::utxo_entry_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::vector<::mmx::stxo_entry_t> NodeClient::get_stxo_list(const std::vector<::mmx::addr_t>& addresses, const uint32_t& since) {
	auto _method = ::mmx::Node_get_stxo_list::create();
	_method->addresses = addresses;
	_method->since = since;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Node_get_stxo_list_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::stxo_entry_t>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

void NodeClient::start_sync(const vnx::bool_t& force) {
	auto _method = ::mmx::Node_start_sync::create();
	_method->force = force;
	vnx_request(_method, false);
}

void NodeClient::start_sync_async(const vnx::bool_t& force) {
	auto _method = ::mmx::Node_start_sync::create();
	_method->force = force;
	vnx_request(_method, true);
}

std::shared_ptr<const ::vnx::addons::HttpResponse> NodeClient::http_request(std::shared_ptr<const ::vnx::addons::HttpRequest> request, const std::string& sub_path) {
	auto _method = ::vnx::addons::HttpComponent_http_request::create();
	_method->request = request;
	_method->sub_path = sub_path;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::addons::HttpComponent_http_request_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::vnx::addons::HttpResponse>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::shared_ptr<const ::vnx::addons::HttpData> NodeClient::http_request_chunk(std::shared_ptr<const ::vnx::addons::HttpRequest> request, const std::string& sub_path, const int64_t& offset, const int64_t& max_bytes) {
	auto _method = ::vnx::addons::HttpComponent_http_request_chunk::create();
	_method->request = request;
	_method->sub_path = sub_path;
	_method->offset = offset;
	_method->max_bytes = max_bytes;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::addons::HttpComponent_http_request_chunk_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::vnx::addons::HttpData>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

::vnx::Object NodeClient::vnx_get_config_object() {
	auto _method = ::vnx::ModuleInterface_vnx_get_config_object::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_object_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::vnx::Object>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

::vnx::Variant NodeClient::vnx_get_config(const std::string& name) {
	auto _method = ::vnx::ModuleInterface_vnx_get_config::create();
	_method->name = name;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::vnx::Variant>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

void NodeClient::vnx_set_config_object(const ::vnx::Object& config) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config_object::create();
	_method->config = config;
	vnx_request(_method, false);
}

void NodeClient::vnx_set_config_object_async(const ::vnx::Object& config) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config_object::create();
	_method->config = config;
	vnx_request(_method, true);
}

void NodeClient::vnx_set_config(const std::string& name, const ::vnx::Variant& value) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config::create();
	_method->name = name;
	_method->value = value;
	vnx_request(_method, false);
}

void NodeClient::vnx_set_config_async(const std::string& name, const ::vnx::Variant& value) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config::create();
	_method->name = name;
	_method->value = value;
	vnx_request(_method, true);
}

::vnx::TypeCode NodeClient::vnx_get_type_code() {
	auto _method = ::vnx::ModuleInterface_vnx_get_type_code::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::vnx::TypeCode>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

std::shared_ptr<const ::vnx::ModuleInfo> NodeClient::vnx_get_module_info() {
	auto _method = ::vnx::ModuleInterface_vnx_get_module_info::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_module_info_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::vnx::ModuleInfo>>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}

void NodeClient::vnx_restart() {
	auto _method = ::vnx::ModuleInterface_vnx_restart::create();
	vnx_request(_method, false);
}

void NodeClient::vnx_restart_async() {
	auto _method = ::vnx::ModuleInterface_vnx_restart::create();
	vnx_request(_method, true);
}

void NodeClient::vnx_stop() {
	auto _method = ::vnx::ModuleInterface_vnx_stop::create();
	vnx_request(_method, false);
}

void NodeClient::vnx_stop_async() {
	auto _method = ::vnx::ModuleInterface_vnx_stop::create();
	vnx_request(_method, true);
}

vnx::bool_t NodeClient::vnx_self_test() {
	auto _method = ::vnx::ModuleInterface_vnx_self_test::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_self_test_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<vnx::bool_t>();
	} else {
		throw std::logic_error("NodeClient: invalid return value");
	}
}


} // namespace mmx
