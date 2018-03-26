/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 18:07:16 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/26 19:37:39 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"

int		Account::getNbAccounts() {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount() {
	return Account::_totalAmount;
}

int		Account::getNbDeposits() {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals() {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos() {

	Account::_displayTimestamp();
	std::cout << \
		"accounts:" << Account::_nbAccounts << \
		";total:" << Account::_totalAmount << \
		";deposits:" << Account::_totalNbDeposits << \
		";withdrawals:" << Account::_totalNbWithdrawals << \
	std::endl;

}

Account::Account(int initial_deposit) {

	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << \
		"index:" << this->_accountIndex << \
		";amount:" << this->_amount << \
		";created" << \
	std::endl;

}

Account::~Account() {

	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;

	Account::_displayTimestamp();
	std::cout << \
		"index:" << this->_accountIndex << \
		";amount:" << this->_amount << \
		";closed" << \
	std::endl;

}

void	Account::makeDeposit(int deposit) {

	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << \
		"index:" << this->_accountIndex << \
		";p_amount:" << this->_amount - deposit << \
		";deposit:" << deposit << \
		";amount:" << this->_amount << \
		";nb_deposits:" << this->_nbDeposits << \
	std::endl;

}

bool	Account::makeWithdrawal(int withdrawal) {

	Account::_displayTimestamp();
	std::cout << \
		"index:" << this->_accountIndex << \
		";p_amount:" << this->_amount;

	if (this->_amount < withdrawal) {

		std::cout << ";withdrawal:refused" << std::endl;

		return false;

	} else {

		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;

		std::cout << \
			";withdrawal:" << withdrawal << \
			";amount:" << this->_amount << \
			";nb_withdrawals:" << this->_nbWithdrawals << \
		std::endl;

		return true;

	}

}

int		Account::checkAmount() const {
	return this->_amount;
}

void	Account::displayStatus() const {
	Account::_displayTimestamp();
	std::cout << \
		"index:" << this->_accountIndex << \
		";amount:" << this->_amount << \
		";deposits:" << this->_nbDeposits << \
		";withdrawals:" << this->_nbWithdrawals << \
	std::endl;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
	char timestamp[256];
	time_t curr_time = time(NULL);
	struct tm *my_time = localtime(&curr_time);

	strftime(timestamp, sizeof(timestamp), "[%G%m%d_%H%M%S] ", my_time);
	std::cout << timestamp;
	// std::cout << "[20150406_153629] "; //for debug
}
