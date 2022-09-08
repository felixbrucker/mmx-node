
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/FarmerClient.hxx>
#include <mmx/BlockHeader.hxx>
#include <mmx/FarmInfo.hxx>
#include <mmx/Farmer_get_farm_info.hxx>
#include <mmx/Farmer_get_farm_info_return.hxx>
#include <mmx/Farmer_get_farmer_keys.hxx>
#include <mmx/Farmer_get_farmer_keys_return.hxx>
#include <mmx/Farmer_get_mac_addr.hxx>
#include <mmx/Farmer_get_mac_addr_return.hxx>
#include <mmx/Farmer_sign_block.hxx>
#include <mmx/Farmer_sign_block_return.hxx>
#include <mmx/Farmer_sign_proof.hxx>
#include <mmx/Farmer_sign_proof_return.hxx>
#include <mmx/ProofResponse.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/bls_pubkey_t.hpp>
#include <mmx/bls_signature_t.hpp>
#include <vnx/Hash64.hpp>
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

#include <vnx/Generic.hxx>
#include <vnx/vnx.h>


namespace mmx {

FarmerClient::FarmerClient(const std::string& service_name)
	:	Client::Client(vnx::Hash64(service_name))
{
}

FarmerClient::FarmerClient(vnx::Hash64 service_addr)
	:	Client::Client(service_addr)
{
}

::vnx::Hash64 FarmerClient::get_mac_addr() {
	auto _method = ::mmx::Farmer_get_mac_addr::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Farmer_get_mac_addr_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::vnx::Hash64>();
	} else {
		throw std::logic_error("FarmerClient: invalid return value");
	}
}

std::vector<::mmx::bls_pubkey_t> FarmerClient::get_farmer_keys() {
	auto _method = ::mmx::Farmer_get_farmer_keys::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Farmer_get_farmer_keys_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::bls_pubkey_t>>();
	} else {
		throw std::logic_error("FarmerClient: invalid return value");
	}
}

std::shared_ptr<const ::mmx::FarmInfo> FarmerClient::get_farm_info() {
	auto _method = ::mmx::Farmer_get_farm_info::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Farmer_get_farm_info_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::FarmInfo>>();
	} else {
		throw std::logic_error("FarmerClient: invalid return value");
	}
}

::mmx::bls_signature_t FarmerClient::sign_proof(std::shared_ptr<const ::mmx::ProofResponse> value) {
	auto _method = ::mmx::Farmer_sign_proof::create();
	_method->value = value;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Farmer_sign_proof_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::mmx::bls_signature_t>();
	} else {
		throw std::logic_error("FarmerClient: invalid return value");
	}
}

std::shared_ptr<const ::mmx::BlockHeader> FarmerClient::sign_block(std::shared_ptr<const ::mmx::BlockHeader> block, const uint64_t& reward_amount) {
	auto _method = ::mmx::Farmer_sign_block::create();
	_method->block = block;
	_method->reward_amount = reward_amount;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::Farmer_sign_block_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::mmx::BlockHeader>>();
	} else {
		throw std::logic_error("FarmerClient: invalid return value");
	}
}

::vnx::Object FarmerClient::vnx_get_config_object() {
	auto _method = ::vnx::ModuleInterface_vnx_get_config_object::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_object_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::vnx::Object>();
	} else {
		throw std::logic_error("FarmerClient: invalid return value");
	}
}

::vnx::Variant FarmerClient::vnx_get_config(const std::string& name) {
	auto _method = ::vnx::ModuleInterface_vnx_get_config::create();
	_method->name = name;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::vnx::Variant>();
	} else {
		throw std::logic_error("FarmerClient: invalid return value");
	}
}

void FarmerClient::vnx_set_config_object(const ::vnx::Object& config) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config_object::create();
	_method->config = config;
	vnx_request(_method, false);
}

void FarmerClient::vnx_set_config_object_async(const ::vnx::Object& config) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config_object::create();
	_method->config = config;
	vnx_request(_method, true);
}

void FarmerClient::vnx_set_config(const std::string& name, const ::vnx::Variant& value) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config::create();
	_method->name = name;
	_method->value = value;
	vnx_request(_method, false);
}

void FarmerClient::vnx_set_config_async(const std::string& name, const ::vnx::Variant& value) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config::create();
	_method->name = name;
	_method->value = value;
	vnx_request(_method, true);
}

::vnx::TypeCode FarmerClient::vnx_get_type_code() {
	auto _method = ::vnx::ModuleInterface_vnx_get_type_code::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::vnx::TypeCode>();
	} else {
		throw std::logic_error("FarmerClient: invalid return value");
	}
}

std::shared_ptr<const ::vnx::ModuleInfo> FarmerClient::vnx_get_module_info() {
	auto _method = ::vnx::ModuleInterface_vnx_get_module_info::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_module_info_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::vnx::ModuleInfo>>();
	} else {
		throw std::logic_error("FarmerClient: invalid return value");
	}
}

void FarmerClient::vnx_restart() {
	auto _method = ::vnx::ModuleInterface_vnx_restart::create();
	vnx_request(_method, false);
}

void FarmerClient::vnx_restart_async() {
	auto _method = ::vnx::ModuleInterface_vnx_restart::create();
	vnx_request(_method, true);
}

void FarmerClient::vnx_stop() {
	auto _method = ::vnx::ModuleInterface_vnx_stop::create();
	vnx_request(_method, false);
}

void FarmerClient::vnx_stop_async() {
	auto _method = ::vnx::ModuleInterface_vnx_stop::create();
	vnx_request(_method, true);
}

vnx::bool_t FarmerClient::vnx_self_test() {
	auto _method = ::vnx::ModuleInterface_vnx_self_test::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_self_test_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<vnx::bool_t>();
	} else {
		throw std::logic_error("FarmerClient: invalid return value");
	}
}


} // namespace mmx
