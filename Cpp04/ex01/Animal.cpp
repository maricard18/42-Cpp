/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:23:36 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 18:25:14 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "An animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
