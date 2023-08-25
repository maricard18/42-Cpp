/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:12:43 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 09:53:55 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor was called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor was called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (getHitPoints() <= 0 && getEnergyPoints() <= 0)
	{
		std::cout << "ClapTrap " << getName() << " is dead" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " attacks " << target,
	std::cout << " causing " << getAttackDamage(),
	std::cout << " points of damage!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}
