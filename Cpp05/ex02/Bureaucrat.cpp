/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:49:29 by maricard          #+#    #+#             */
/*   Updated: 2023/09/14 14:53:06 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(0)
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
	std::cout << "Bureaucrat operator overload constructor called" 
			  << std::endl;
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
	std::cout << "Incrementing grade by one : " 
			  << this->_grade - 1 
			  << std::endl;
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	std::cout << "Descrementing grade by one : " 
			  << this->_grade + 1 
			  << std::endl;
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(AForm &f)
{
	if (f.getStatus() == true)
		std::cout << GREEN 
				  << this->_name 
				  << " signed " 
				  << f.getName() 
				  << " form" 
				  << RESET
				  << std::endl;
	else
		std::cout << RED 
				  << this->_name 
				  << " couldn't sign form because grade to low."
				  << RESET
				  << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form)
{
	if (this->getGrade() > form.getGradeToExecute())
		std::cout << RED
				  << this->_name 
				  << " couldn't execute " 
				  << form.getName()
				  << RESET
				  << std::endl;
	else
	{
		std::cout << GREEN
				  << this->_name 
				  << " executes " 
				  << form.getName() 
				  << RESET
				  << std::endl;
		form.action();
	}
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return (RED "BUREAUCRAT GRADE TOO HIGH" RESET);
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return (RED "BUREAUCRAT GRADE TOO LOW" RESET);
}


std::ostream& operator<<(std::ostream &out, const Bureaucrat &c)
{
	out << c.getName() 
		<< ", Bureaucrat grade "
		<< c.getGrade() 
		<< std::endl;
	return out;
}
