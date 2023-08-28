/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:12:43 by maricard          #+#    #+#             */
/*   Updated: 2023/08/28 15:00:40 by maricard         ###   ########.fr       */
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

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap has requested high fives!" << std::endl;
}
