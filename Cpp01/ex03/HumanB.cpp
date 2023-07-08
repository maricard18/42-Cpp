/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:58:20 by maricard          #+#    #+#             */
/*   Updated: 2023/07/08 18:30:06 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	setName(name);
}

void HumanB::setName(std::string humanName)
{
	name = humanName;
}

void HumanB::setWeapon(Weapon &club)
{
	type = club.getType();	
}

void HumanB::attack(void)
{
	std::cout << name
			  << " attacks with their weapon "
			  << type
			  << std::endl;
}
