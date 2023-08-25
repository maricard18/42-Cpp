/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:04:52 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 09:56:03 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap Constructor was called" << std::endl;
	this->name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor was called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << getName() << " takes ",
	std::cout << amount << " points of damage!" << std::endl;
	this->hit_points -= amount;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->name << " repairs itself with ",
	std::cout << amount << " hit points!" << std::endl;
	this->hit_points += amount;
	this->energy_points -= 1;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is " << this->name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::getName() << std::endl;
}
