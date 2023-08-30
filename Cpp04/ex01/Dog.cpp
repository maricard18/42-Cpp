/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:27:55 by maricard          #+#    #+#             */
/*   Updated: 2023/08/30 14:56:42 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_DogBrain = new Brain();
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete [] _DogBrain;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = "Dog";
	this->_DogBrain = new Brain();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "awff awff" << std::endl;
}

void	Dog::storeIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		this->_DogBrain->setIdea("A Dog idea", i);
	}
}
