/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:27:29 by maricard          #+#    #+#             */
/*   Updated: 2023/09/11 12:36:14 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_CatBrain = new Brain();
	this->storeIdeas("A Cat Idea");
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_CatBrain = new Brain();
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _CatBrain;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	delete this->_CatBrain;
	this->_CatBrain = new Brain(*other._CatBrain);
	this->storeIdeas("A Cat Idea");
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "miauu miauu" << std::endl;
}

void	Cat::storeIdeas(std::string idea) const
{
	for (int i = 0; i < 100; i++)
	{
		this->_CatBrain->setIdea(idea, i);
	}
	this->getIdea();
}

void	Cat::getIdea() const
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << this->_CatBrain->displayIdea(i) << std::endl;
	}
}

