/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:29:48 by maricard          #+#    #+#             */
/*   Updated: 2023/09/14 00:21:15 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
	
	this->_names[0] = "shrubbery request";
	this->_names[1] = "robotomy request";
	this->_names[2] = "presidential request";

	this->_functions[0] = NULL;
	this->_functions[1] = NULL;
	this->_functions[2] = NULL;
}

Intern::Intern(const Intern& copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
	for (int i = 0; i < 3; i++)
		if (this->_functions[i])
			delete this->_functions[i];
}

Intern& Intern::operator=(const Intern& other)
{
	std::cout << "Intern operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < 3; i++)
		this->_names[i] = other._names[i];
	for (int i = 0; i < 3; i++)
		this->_functions[i] = other._functions[i];
	return (*this);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	int k = 3;
	
	for (int i = 0; i < 3; i++)
		if (this->_names[i] == name)
		{
			if (this->_functions[i])
				delete this->_functions[i];
			k = i;
		}

	switch (k)
	{
		case 0:
			std::cout << GREEN << "Intern creates shrubbery form" << RESET << std::endl;
			this->_functions[0] = new ShrubberyCreationForm(target);
			return (this->_functions[0]);
		case 1:
			std::cout << GREEN << "Intern creates robotomy form" << RESET << std::endl;
			this->_functions[1] = new RobotomyRequestForm(target);
			return (this->_functions[1]);
		case 2:
			std::cout << GREEN << "Intern creates presidential form" << RESET << std::endl;
			this->_functions[2] = new PresidentialPardonForm(target);
			return (this->_functions[2]);
		default:
			std::cout << RED << "Name passed as a parameter doesn't exist" << RESET << std::endl;
			return NULL;
	}
}
