/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:38:58 by maricard          #+#    #+#             */
/*   Updated: 2023/07/04 11:22:43 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << _nbAccounts 
			  << ";total:" << _totalAmount 
			  << ";deposits:" << _totalNbDeposits 
			  << ";withdrawals:" << _totalNbWithdrawals 
			  << std::endl;
}

void Account::makeDeposit( int deposit )
{
	(void)deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{	
	(void)withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return 1;
}

void	Account::displayStatus( void ) const
{
}

void Account :: _displayTimestamp( void )
{
	std::time_t	time_in_sec;
	std::tm 	*time;

	time_in_sec = std::time(NULL);
	time = std::localtime(&time_in_sec);
	int year = time->tm_year + 1900;
	int month = time->tm_mon;
	int day = time->tm_mday;
	int hour = time->tm_hour;
	int min = time->tm_min;
	int sec = time->tm_sec;
	
	std::cout << "[" << year << month << day << "_" << hour << min << sec << "] ";
}
