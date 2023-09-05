/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:23:36 by maricard          #+#    #+#             */
/*   Updated: 2023/09/05 12:14:07 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "Animal";
	this->_AnimalBrain = new Brain();
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	delete [] _AnimalBrain;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = "Animal";
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "An animal sound" << std::endl;
}

void	Animal::storeIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		this->_AnimalBrain->setIdea("An Animal Idea", i);
	}
}

std::string Animal::getType() const
{
	return (this->_type);
}
