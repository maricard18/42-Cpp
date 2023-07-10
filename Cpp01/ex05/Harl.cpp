/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:23:02 by maricard          #+#    #+#             */
/*   Updated: 2023/07/10 15:11:21 by maricard         ###   ########.fr       */
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
	std::map<std::string, void (Harl::*)()> myMap;
	std::map<std::string, void (Harl::*)()>::iterator it;

	myMap["DEBUG"] = &Harl::debug;
	myMap["INFO"] = &Harl::info;
	myMap["WARNING"] = &Harl::warning;
	myMap["ERROR"] = &Harl::error;

	it = myMap.find(level);
	if (it != myMap.end())
		(this->*myMap[level])();
	else
		std::cout << "Wrong level." << std::endl;
}
