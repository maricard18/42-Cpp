/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:38:58 by maricard          #+#    #+#             */
/*   Updated: 2023/07/05 22:30:00 by maricard         ###   ########.fr       */
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
Account::Account( int initial_deposit )
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << initial_deposit << ";"
			  << "created" 
			  << std::endl;
	_nbAccounts++;
}

// ---> Account destructer ------
Account::~Account( void )
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _totalAmount << ";"
			  << "closed" 
			  << std::endl;
	_nbAccounts++;
}

// ---> Get info of all acounts -----
void Account::displayAccountsInfos( void )
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
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";"
			  << "amount:" << "?" << ";"
			  << "deposits:" << getNbDeposits() << ";"
			  << "withdrawals:" << getNbWithdrawals()
			  << std::endl;
	_nbAccounts++;
	if (_nbAccounts == 8)
		_nbAccounts = 0;
}

// ---> Deposit function -----------
void Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits = _nbDeposits;
	_totalAmount += deposit;
	std::cout << "index:" << _nbAccounts << ";"
			  << "p_amount:" << "?" << ";"
			  << "deposit:" << deposit << ";"
			  << "ammount:" << "?" << ";"
			  << "nb_deposits:" << _nbDeposits
			  << std::endl;
	_nbAccounts++;
}

// ---> Wthdrawal function ---------------
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	_nbWithdrawals++;
	_totalNbWithdrawals = _nbWithdrawals;
	_totalAmount -= withdrawal;
	std::cout << "index:" << _nbAccounts << ";"
			  << "p_amount:" << "?" << ";"
			  << "withdrawal:" << withdrawal << ";"
			  << "ammount:" << "?" << ";"
			  << "nb_withdrawals:" << _nbWithdrawals
			  << std::endl;
	_nbAccounts++;
	if (withdrawal > )
		return false;
	else
		return true;
}

int		Account::checkAmount( void ) const
{
	printf("checkAmount\n");
	return 1;
}

// ---> Get number of accounts -----
int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

// ---> Get total ammount -----
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

// ---> Get number of total deposits -----
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

// ---> Get number of total withdrawals -----
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

// ---> Get current time Function -----
void Account :: _displayTimestamp( void )
{
	std::time_t	time_in_sec;
	std::tm 	*time;

	time_in_sec = std::time(NULL);
	time = std::localtime(&time_in_sec);
	std::string year = std::to_string(time->tm_year + 1900);
	std::string mon = std::to_string(time->tm_mon + 1);
	std::string day = std::to_string(time->tm_mday);
	std::string hour = std::to_string(time->tm_hour);
	std::string min = std::to_string(time->tm_min);
	std::string sec = std::to_string(time->tm_sec);

	if (time->tm_mon < 10)
		mon = '0' + mon;
	if (time->tm_mday < 10)
		day = '0' + day;
	
	std::cout << "[" << year << mon << day 
			  << "_" 
			  << hour << min << sec << "] ";
}
