/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:10:14 by maricard          #+#    #+#             */
/*   Updated: 2023/08/28 12:20:10 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Deafault Constructor was called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor was called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor was called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (getHitPoints() <= 0 && getEnergyPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target,
	std::cout << " causing " << this->attack_damage,
	std::cout << " points of damage!" << std::endl;
	this->energy_points -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes ",
	std::cout << amount << " points of damage!" << std::endl;
	this->hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		return ;	
	}
	std::cout << "ClapTrap " << this->name << " repairs itself with ",
	std::cout << amount << " hit points!" << std::endl;
	this->hit_points += amount;
	this->energy_points -= 1;
}

int		ClapTrap::getHitPoints(void)
{
	return (this->hit_points);
}

int		ClapTrap::getEnergyPoints(void)
{
	return (this->energy_points);
}