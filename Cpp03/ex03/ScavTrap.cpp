/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:12:43 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 09:57:47 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
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

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << getName() << " attacks " << target,
	std::cout << " causing " << getAttackDamage(),
	std::cout << " points of damage!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

int	ScavTrap::getEnergyPoints(void)
{
	return (this->energy_points);
}

void	ScavTrap::setEnergyPoints(int amount)
{
	this->energy_points = amount;
}
