/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:58:00 by maricard          #+#    #+#             */
/*   Updated: 2023/07/11 14:21:40 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::setName(std::string humanName)
{
	this->name = humanName;
}

void HumanA::attack(void)
{
	std::cout << this->name
			  << " attacks with their weapon "
			  << club.getType()
			  << std::endl;
}

HumanA::HumanA(std::string name, Weapon &club) : club(club)
{	
	setName(name);
}
