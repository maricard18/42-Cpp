/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:47:41 by maricard          #+#    #+#             */
/*   Updated: 2023/07/21 10:42:47 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructer called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructer called" << std::endl;
	this->value = number * (1 << bits);
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructer called" << std::endl;
	this->value = number * (1 << bits);
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructer called" << std::endl;
	this->value = copy.value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->value = other.value;
	return (*this);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value) / (float)(1 << bits);
}

int Fixed::toInt(void) const
{
	return (this->value >> bits);
}


std::ostream& operator<<(std::ostream &out, const Fixed &c)
{
	out << c.toFloat();
	return out;
}
