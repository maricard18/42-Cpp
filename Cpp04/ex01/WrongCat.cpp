/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:27:29 by maricard          #+#    #+#             */
/*   Updated: 2023/09/06 14:08:55 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->setType("WrongCat");
	this->_WrongCatBrain = new Brain();
	this->storeIdeas();
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	delete _WrongCatBrain;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	this->_WrongCatBrain = other._WrongCatBrain;
	this->storeIdeas();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "miauuu miauuu" << std::endl;
}

void	WrongCat::storeIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		this->_WrongCatBrain->setIdea("A WrongCat Idea", i);
	}
	this->getIdea();
}

void	WrongCat::getIdea() const
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << this->_WrongCatBrain->displayIdea(i) << std::endl;
	}
}
