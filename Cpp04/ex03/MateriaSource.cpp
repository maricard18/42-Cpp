/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:11:16 by maricard          #+#    #+#             */
/*   Updated: 2023/09/11 13:07:33 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_materia[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "MateriaSource operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		delete this->_materia[i];
		this->_materia[i] = other._materia[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			std::cout << "Materia learned on slot -> " << i << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource slots are full" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i]->getType() == type)
		{
			std::cout << "Materia learned on slot -> " << i << std::endl;
			return (this->_materia[i]->clone());
		}
	}
	std::cout << "Materia not learned" << std::endl;
	return 0;
}
