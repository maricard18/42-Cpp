/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:11:16 by maricard          #+#    #+#             */
/*   Updated: 2023/09/10 12:08:59 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	this->_id = -1;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "MateriaSource operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_id = other._id;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = other._materia[i];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (this->_id < 3)
	{
		this->_id++;
		this->_materia[this->_id] = m;
		std::cout << "Materia learned on slot -> " << this->_id << std::endl;
	}
	else
		std::cout << "MateriaSource slots are full" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (type != "ice" || type != "cure")
		return 0;
	return (this->_materia[this->_id]);
}
