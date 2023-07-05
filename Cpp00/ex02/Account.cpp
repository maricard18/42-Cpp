/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:38:58 by maricard          #+#    #+#             */
/*   Updated: 2023/07/05 10:52:28 by maricard         ###   ########.fr       */
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
	printf("displayAccountsInfo\n");
	//std::cout << "accounts:" << _nbAccounts 
	//		  << ";total:" << _totalAmount 
	//		  << ";deposits:" << _totalNbDeposits 
	//		  << ";withdrawals:" << _totalNbWithdrawals 
	//		  << std::endl;
}

void Account::makeDeposit( int deposit )
{
	printf("makeDeposit\n");
	(void)deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	printf("makeWithdrawal\n");	
	(void)withdrawal;
	return true;
}

int		Account::checkAmount( void ) const
{
	printf("checkAmount\n");
	return 1;
}

void	Account::displayStatus( void ) const
{
	printf("displayStatus\n");
}

Account::Account( int initial_deposit )
{
	printf("Account\n");
	(void)initial_deposit;
}

Account::~Account( void )
{
	printf("~Account\n");
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
