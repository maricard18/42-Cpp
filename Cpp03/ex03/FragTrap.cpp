/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:12:43 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 11:02:01 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
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

int		FragTrap::getHitPoints(void)
{
	return (this->hit_points);
}

void	FragTrap::setHitPoints(int hit_points)
{
	this->hit_points = hit_points;
}

int		FragTrap::getAttackDamage(void)
{
	return (this->attack_damage);
}

void	FragTrap::setAttackDamage(int attack_damage)
{
	this->attack_damage = attack_damage;
}
