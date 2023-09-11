/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:02:20 by maricard          #+#    #+#             */
/*   Updated: 2023/09/11 12:14:29 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const std::string& type)
{
	std::cout << "Cure type constructor called" << std::endl;
	this->_type = type;
}

Cure::Cure(const Cure& copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	std::cout << "Cure operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

AMateria*	Cure::clone() const
{
	std::cout << "Cure clone called" << std::endl;
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " 
			  << target.getName() 
			  << "'s wounds *" 
			  << std::endl;
}
