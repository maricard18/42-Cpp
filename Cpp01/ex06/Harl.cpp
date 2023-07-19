/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:23:02 by maricard          #+#    #+#             */
/*   Updated: 2023/07/11 11:44:00 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl
			  << "I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl
			  << "You didn’t put enough bacon in my burger!" << std::endl
			  << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl
			  << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable!" << std::endl
			  << "I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int a = 4;
	std::string arrayStrings[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	
	void (Harl::*functions[4])() = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	
	for (int i = 0; i < 4; i++)
		if (arrayStrings[i] == level)
			a = i;
	switch (a)
	{
		case 0:
			std::cout << "[ " << arrayStrings[0] << " ]" << std::endl;
			(this->*functions[0])();
			std::cout << std::endl;
		case 1:
			std::cout << "[ " << arrayStrings[1] << " ]" << std::endl;
			(this->*functions[1])();
			std::cout << std::endl;
		case 2:
			std::cout << "[ " << arrayStrings[2] << " ]" << std::endl;
			(this->*functions[2])();
			std::cout << std::endl;
		case 3:
			std::cout << "[ " << arrayStrings[3] << " ]" << std::endl;
			(this->*functions[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
