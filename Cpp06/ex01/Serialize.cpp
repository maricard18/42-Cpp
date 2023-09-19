/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:27:45 by maricard          #+#    #+#             */
/*   Updated: 2023/09/19 10:11:27 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
	//std::cout << "Serialize default constructor called" << std::endl;
}

Serialize::Serialize(const Serialize& copy)
{
	//std::cout << "Serialize copy constructor called" << std::endl;
	*this = copy;
}

Serialize::~Serialize()
{
	//std::cout << "Serialize destructor called" << std::endl;
}

Serialize& Serialize::operator=(const Serialize& other)
{
	//std::cout << "Serialize operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

uintptr_t 	Serialize::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* 	Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
