/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:23:19 by maricard          #+#    #+#             */
/*   Updated: 2023/09/07 11:28:58 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria()
{
	std::cout << "Destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}
