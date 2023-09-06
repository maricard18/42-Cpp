/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:38:55 by maricard          #+#    #+#             */
/*   Updated: 2023/09/06 09:42:30 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

void	Brain::setIdea(std::string idea, int i)
{
	this->_ideas[i] = idea;
}

std::string Brain::displayIdea(int i)
{
	return (this->_ideas[i]);
}
