/*
 * Transaction.cpp
 *
 *  Created on: Nov 27, 2021
 *      Author: mad
 */

#include <mmx/Transaction.hxx>
#include <mmx/solution/PubKey.hxx>
#include <mmx/write_bytes.h>


namespace mmx {

hash_t TransactionBase::calc_hash() const {
	return id;
}

uint64_t TransactionBase::calc_cost(std::shared_ptr<const ChainParams> params) const {
	return 0;
}

std::shared_ptr<const TransactionBase> TransactionBase::create_ex(const hash_t& id)
{
	auto tx = TransactionBase::create();
	tx->id = id;
	return tx;
}

void Transaction::finalize()
{
	while(!nonce) {
		nonce = vnx::rand64();
	}
	id = calc_hash();
}

vnx::bool_t Transaction::is_valid() const
{
	for(const auto& op : execute) {
		if(!op) {
			return false;
		}
	}
	for(const auto& sol : solutions) {
		if(!sol) {
			return false;
		}
	}
	return version == 0 && fee_ratio >= 1024 && (!parent || parent->is_valid()) && calc_hash() == id;
}

hash_t Transaction::calc_hash() const
{
	std::vector<uint8_t> buffer;
	vnx::VectorOutputStream stream(&buffer);
	vnx::OutputBuffer out(&stream);

	buffer.reserve(4 * 1024);

	write_bytes(out, get_type_hash());
	write_field(out, "version", version);
	write_field(out, "expires", expires);
	write_field(out, "fee_ratio", 	fee_ratio);
	write_field(out, "note", 	note);
	write_field(out, "nonce", 	nonce);
	write_field(out, "salt", 	salt);
	write_field(out, "sender",	sender);
	write_field(out, "inputs",	inputs);
	write_field(out, "outputs", outputs);
	write_field(out, "execute");
	for(const auto& op : execute) {
		write_bytes(out, op ? op->calc_hash() : hash_t());
	}
	write_field(out, "deploy", deploy ? deploy->calc_hash() : hash_t());
	write_field(out, "parent", parent ? parent->calc_hash() : hash_t());
	write_field(out, "is_extendable", is_extendable);

	out.flush();

	return hash_t(buffer);
}

void Transaction::add_input(const addr_t& currency, const addr_t& address, const uint64_t& amount)
{
	txin_t in;
	in.address = address;
	in.contract = currency;
	in.amount = amount;
	inputs.push_back(in);
}

void Transaction::add_output(const addr_t& currency, const addr_t& address, const uint64_t& amount, const vnx::optional<addr_t>& sender)
{
	txout_t out;
	out.address = address;
	out.contract = currency;
	out.amount = amount;
	out.sender = sender;
	outputs.push_back(out);
}

std::shared_ptr<const Solution> Transaction::get_solution(const uint32_t& index) const
{
	if(index < solutions.size()) {
		return solutions[index];
	}
	return nullptr;
}

txout_t Transaction::get_output(const uint32_t& index) const
{
	if(index < outputs.size()) {
		return outputs[index];
	}
	if(index >= outputs.size()) {
		const auto offset = index - outputs.size();
		if(offset < exec_outputs.size()) {
			return exec_outputs[offset];
		}
	}
	throw std::logic_error("no such output");
}

std::vector<txin_t> Transaction::get_inputs() const
{
	auto res = inputs;
	res.insert(res.end(), exec_inputs.begin(), exec_inputs.end());
	return res;
}

std::vector<txout_t> Transaction::get_outputs() const
{
	auto res = outputs;
	res.insert(res.end(), exec_outputs.begin(), exec_outputs.end());
	return res;
}

std::vector<txin_t> Transaction::get_all_inputs() const
{
	auto out = get_inputs();
	auto tx = parent;
	while(tx) {
		const auto tmp = tx->get_inputs();
		out.insert(out.begin(), tmp.begin(), tmp.end());
		tx = tx->parent;
	}
	return out;
}

std::vector<txout_t> Transaction::get_all_outputs() const
{
	auto out = get_outputs();
	auto tx = parent;
	while(tx) {
		const auto tmp = tx->get_outputs();
		out.insert(out.begin(), tmp.begin(), tmp.end());
		tx = tx->parent;
	}
	return out;
}

std::vector<std::shared_ptr<const Operation>> Transaction::get_all_operations() const
{
	auto out = execute;
	auto tx = parent;
	while(tx) {
		out.insert(out.begin(), tx->execute.begin(), tx->execute.end());
		tx = tx->parent;
	}
	return out;
}

uint64_t Transaction::calc_cost(std::shared_ptr<const ChainParams> params) const
{
	if(!params) {
		throw std::logic_error("!params");
	}
	uint128_t cost = params->min_txfee;
	cost += inputs.size() * params->min_txfee_io;
	cost += outputs.size() * params->min_txfee_io;

	for(const auto& in : inputs) {
		if(in.flags & txin_t::IS_EXEC) {
			cost += params->min_txfee_exec;
		}
	}
	for(const auto& op : execute) {
		if(op) {
			cost += params->min_txfee_exec + op->calc_cost(params);
		}
	}
	for(const auto& sol : solutions) {
		if(sol) {
			cost += sol->calc_cost(params);
		}
	}
	if(deploy) {
		cost += params->min_txfee_deploy + deploy->calc_cost(params);
	}
	if(parent) {
		cost += parent->calc_cost(params);
	}
	if(cost.upper()) {
		throw std::logic_error("tx cost amount overflow");
	}
	return cost;
}

void Transaction::merge_sign(std::shared_ptr<const Transaction> tx)
{
	std::unordered_map<uint32_t, uint32_t> import_map;
	for(size_t i = 0; i < inputs.size() && i < tx->inputs.size(); ++i)
	{
		auto& our = inputs[i];
		const auto& other = tx->inputs[i];

		if(other.solution < tx->solutions.size() && our.solution >= solutions.size())
		{
			auto iter = import_map.find(other.solution);
			if(iter != import_map.end()) {
				our.solution = iter->second;
			} else {
				our.solution = solutions.size();
				import_map[other.solution] = our.solution;
				solutions.push_back(tx->solutions[other.solution]);
			}
		}
	}
}

vnx::bool_t Transaction::is_signed() const
{
	for(const auto& in : inputs) {
		if(in.solution >= solutions.size()) {
			return false;
		}
	}
	return true;
}


} // mmx
