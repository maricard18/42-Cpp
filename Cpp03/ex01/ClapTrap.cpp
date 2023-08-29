/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:10:14 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 14:49:03 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Deafault Constructor was called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor was called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor was called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 && this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead, attacked failed :(" << std::endl;
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
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead, repaired failed :(" << std::endl;
		return ;	
	}
	std::cout << "ClapTrap " << this->name << " repairs itself with ",
	std::cout << amount << " hit points!" << std::endl;
	this->hit_points += amount;
	this->energy_points -= 1;
}
