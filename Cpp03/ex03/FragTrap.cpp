/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:12:43 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 14:54:11 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap Constructor was called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor was called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor was called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 && this->energy_points <= 0)
	{
		std::cout << "FragTrap " << this->name << " is dead, attacked failed :(" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target,
	std::cout << " causing " << this->attack_damage,
	std::cout << " points of damage!" << std::endl;
	this->energy_points -= 1;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap has requested high fives!" << std::endl;
}
