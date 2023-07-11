/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:58:20 by maricard          #+#    #+#             */
/*   Updated: 2023/07/11 15:20:20 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::setName(std::string humanName)
{
	this->name = humanName;
}

void HumanB::setWeapon(Weapon &club)
{
	this->club = &club;
}

void HumanB::attack(void)
{
	std::cout << this->name
			  << " attacks with their weapon ";
	if (!this->club)
		std::cout << "Null" << std::endl;
	else 
		std::cout << club->getType() << std::endl;
}

HumanB::HumanB(std::string name) : club(NULL)
{
	setName(name);
}
