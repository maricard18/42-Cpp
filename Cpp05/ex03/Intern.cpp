/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:29:48 by maricard          #+#    #+#             */
/*   Updated: 2023/09/13 21:04:12 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
	this->_names[0] = "shrubbery request";
	this->_names[1] = "robotomy request";
	this->_names[2] = "presidential request";
	this->_functions[0] = new ShrubberyCreationForm();
	this->_functions[1] = new RobotomyRequestForm();
	this->_functions[2] = new PresidentialPardonForm();
}

Intern::Intern(const Intern& copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	std::cout << "Intern operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

void	*Intern::makeForm(std::string name, std::string target)
{
	int k = 3;
	
	for (int i = 0; i < 3; i++)
		if (this->_names[i] == name)
			k = i;

	switch (k)
	{
		case 0:
			std::cout << "Intern creates shrubbery form" << std::endl;
			return (*ShrubberyCreationForm)(this->*_functions[0])(target);
		case 1:
			std::cout << "Intern creates robotomy form" << std::endl;
			return (*RobotomyRequestForm)(this->*_functions[1])(target);
		case 2:
			std::cout << "Intern creates presidential form" << std::endl;
			return (*PresidentialPardonForm)(this->*_functions[2])(target);
		default:
			std::cout << "Name passed as a parameter doesn't exist" << std::endl;
			return NULL;
	}
}
