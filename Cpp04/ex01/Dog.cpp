/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:27:55 by maricard          #+#    #+#             */
/*   Updated: 2023/09/11 12:36:22 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_DogBrain = new Brain();
	this->storeIdeas("A Dog idea");
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_DogBrain = new Brain();
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _DogBrain;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	delete this->_DogBrain;
	this->_DogBrain = new Brain(*other._DogBrain);
	this->storeIdeas("A Dog idea");
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "awff awff" << std::endl;
}

void	Dog::storeIdeas(std::string idea) const
{
	for (int i = 0; i < 100; i++)
	{
		this->_DogBrain->setIdea(idea, i);
	}
	this->getIdea();
}

void	Dog::getIdea() const
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << this->_DogBrain->displayIdea(i) << std::endl;
	}
}
