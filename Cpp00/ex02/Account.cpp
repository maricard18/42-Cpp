/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:38:58 by maricard          #+#    #+#             */
/*   Updated: 2023/07/06 15:41:29 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdio.h>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// ---> Account Constructer -------
Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << initial_deposit << ";"
			  << "created"
			  << std::endl;
	_nbAccounts++;
}

// ---> Account destructer ------
Account::~Account(void)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "closed"
			  << std::endl;
	_nbAccounts++;
}

// ---> Get info of all acounts -----
void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";"
			  << "deposits:" << _totalNbDeposits << ";"
			  << "withdrawals:" << _totalNbWithdrawals
			  << std::endl;
	if (_nbAccounts == 8)
		_nbAccounts = 0;
}

// ---> Get info of a single account -----
void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";"
			  << "amount:" << _amount << ";"
			  << "deposits:" << _nbDeposits << ";"
			  << "withdrawals:" << _nbWithdrawals
			  << std::endl;
	_nbAccounts++;
	if (_nbAccounts == 8)
		_nbAccounts = 0;
}

// ---> Deposit function -----------
void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << _nbAccounts << ";"
			  << "p_amount:" << _amount << ";"
			  << "deposit:" << deposit << ";"
			  << "amount:" << _amount + deposit << ";"
			  << "nb_deposits:" << _nbDeposits
			  << std::endl;
	_amount += deposit;
	_nbAccounts++;
}

// ---> Wthdrawal function ---------------
bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";"
			  << "p_amount:" << _amount << ";";	  
	if (_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
	}
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";"
			  	  << "amount:" << _amount - withdrawal << ";"
			  	  << "nb_withdrawals:" << _nbWithdrawals
			  	  << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
	}
	_nbAccounts++;
	return true;
}

// ---> Get number of accounts -----
int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

// ---> Get total ammount -----
int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

// ---> Get number of total deposits -----
int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

// ---> Get number of total withdrawals -----
int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

// ---> Get current time Function -----
void Account ::_displayTimestamp(void)
{
	std::time_t time_in_sec;
	std::tm *time;

	time_in_sec = std::time(NULL);
	time = std::localtime(&time_in_sec);
	int year = time->tm_year + 1900;
	int mon = time->tm_mon + 1;
	int day = time->tm_mday;
	int hour = time->tm_hour;
	int min = time->tm_min;
	int sec = time->tm_sec;

	std::cout << "[" << std::setw(2) << year
			  << std::setfill('0') << std::setw(2) << mon
			  << std::setfill('0') << std::setw(2) << day
			  << "_"
			  << std::setw(2) << hour
			  << std::setw(2) << min
			  << std::setw(2) << sec
			  << "] ";
}

//diff -u <(cut -d ' ' -f 2 output.log) <(cut -d ' ' -f 2 expected.log)
