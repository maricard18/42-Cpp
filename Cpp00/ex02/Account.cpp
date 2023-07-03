/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:38:58 by maricard          #+#    #+#             */
/*   Updated: 2023/07/03 19:10:02 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	_accountIndex = 0;
int	_amount = 0;	
int	_nbDeposits = 0;
int	_nbWithdrawals = 0;

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
}

int		Account::checkAmount( void ) const
{
}

void	Account::displayStatus( void ) const
{
}

void Account::_displayTimestamp( void )
{
}
