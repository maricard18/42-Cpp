/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:04:52 by maricard          #+#    #+#             */
/*   Updated: 2023/08/28 17:04:09 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap Constructor was called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap Constructor was called" << std::endl;
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
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
	this->name = other.name;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is " << this->name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::name << std::endl;
}
