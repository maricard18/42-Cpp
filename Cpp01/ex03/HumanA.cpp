/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:58:00 by maricard          #+#    #+#             */
/*   Updated: 2023/07/08 18:25:51 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &club)
{
	std::string type = club.getType();
	
	setName(name);
	setType(type);
}

void HumanA::setName(std::string humanName)
{
	name = humanName;
}

void HumanA::setType(std::string weapon)
{
	type = weapon;
}

void HumanA::attack(void)
{
	std::cout << name
			  << " attacks with their weapon "
			  << type
			  << std::endl;
}
