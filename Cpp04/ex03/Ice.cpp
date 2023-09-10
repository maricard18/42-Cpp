/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:02:08 by maricard          #+#    #+#             */
/*   Updated: 2023/09/10 11:42:36 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const std::string& type)
{
	std::cout << "Ice type constructor called" << std::endl;
	this->_type = type;
}

Ice::Ice(const Ice& copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	std::cout << "Ice operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " 
			  << target.getName() << " *" 
			  << std::endl;
}
