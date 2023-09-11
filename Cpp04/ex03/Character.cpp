/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:42:31 by maricard          #+#    #+#             */
/*   Updated: 2023/09/11 13:06:08 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	this->_name = "Default";
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->_unequiped[i] = NULL;
	}
}

Character::Character(std::string const & name)
{
	std::cout << "Character constructor called" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->_unequiped[i] = NULL;
	}
}

Character::Character(const Character& copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->_unequiped[i] = NULL;
	}
	*this = copy;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		delete this->_unequiped[i];
	}
}

Character& Character::operator=(const Character& other)
{
	std::cout << "Character operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = other._inventory[i];
	}
	for (int i = 0; i < 4; i++)
	{
		delete this->_unequiped[i];
		this->_unequiped[i] = other._unequiped[i];
	}
	return (*this);
}

std::string const&	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "Materia equiped on inventory slot -> " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory slots are full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && this->_inventory[idx])
	{
		this->_unequiped[idx] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
		std::cout << "Materia unequiped on inventory slot -> " << idx << std::endl;
	}
	else
		std::cout << "Materia failed to unequip" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
	{
		std::cout << "Materia not found" << std::endl;
	}
	else
	{
		this->_inventory[idx]->use(target);
	}
}
