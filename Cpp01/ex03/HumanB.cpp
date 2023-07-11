/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:58:20 by maricard          #+#    #+#             */
/*   Updated: 2023/07/11 13:10:39 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : weapon(weapon)
{
	setName(name);
}

void HumanB::setName(std::string humanName)
{
	this->name = humanName;
}

void HumanB::setWeapon(Weapon &club)
{
	this->weapon = club;
	type = club.getType();
}

void HumanB::attack(void)
{
	std::cout << this->name
			  << " attacks with their weapon "
			  << weapon.getType()
			  << std::endl;
}
