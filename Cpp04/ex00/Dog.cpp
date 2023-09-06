/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:27:55 by maricard          #+#    #+#             */
/*   Updated: 2023/09/06 13:40:05 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "awff awff" << std::endl;
}
