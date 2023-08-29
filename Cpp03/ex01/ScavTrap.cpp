/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:12:43 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 14:49:27 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap Constructor was called" << std::endl;
}

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
	if (this->hit_points <= 0 && this->energy_points <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead, attacked failed :(" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target,
	std::cout << " causing " << this->attack_damage,
	std::cout << " points of damage!" << std::endl;
	this->energy_points -= 1;
}
