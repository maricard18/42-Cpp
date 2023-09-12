/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:49:29 by maricard          #+#    #+#             */
/*   Updated: 2023/09/12 13:44:30 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("No name"), _grade(-1)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	this->_grade = grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);

	Bureaucrat tmp(other._name, other._grade);
	*this = tmp;

	return *this;
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	std::cout << "Incrementing grade by one" << std::endl;
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	std::cout << "Descrementing grade by one" << std::endl;
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form &f)
{
	if (f.getStatus() == true)
		std::cout << this->_name << " signed " << f.getName() << " form" << std::endl;
	else
	{
		std::cout << this->_name << " couldn't signed form because ";
		if (f.getGrade() < f.getGradeNedded())
			std::cout << "Grade to high." << std::endl;
		else
			std::cout << "Grade to low." << std::endl;
	}
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BUREAUCRAT GRADE TOO HIGH");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BUREAUCRAT GRADE TOO LOW");
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &c)
{
	out << c.getName() 
		<< ", Bureaucrat grade "
		<< c.getGrade() 
		<< std::endl;
	return out;
}
