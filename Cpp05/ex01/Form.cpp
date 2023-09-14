/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:03:22 by maricard          #+#    #+#             */
/*   Updated: 2023/09/14 14:45:59 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _status(false), _grade_to_sign(0), _grade_to_execute(0)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const name, int grade, int const grade_to_sign) :
	_name(name), _status(false), _grade_to_sign(grade_to_sign), _grade_to_execute(0)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1 || grade_to_sign < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150 || grade_to_sign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy) : _name(copy._name), _status(copy._status),
	_grade_to_sign(copy._grade_to_sign), _grade_to_execute(copy._grade_to_execute)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = copy;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
	std::cout << "Form operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getStatus()
{
	return (this->_status);
}

int Form::getGradeToSign() const
{
	return (this->_grade_to_sign);
}

int Form::getGradeToExecute() const
{
	return (this->_grade_to_execute);
}

void Form::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->_grade_to_sign)
		this->_status = false;
	else
		this->_status = true;	
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ( RED "FORM GRADE TOO HIGH" RESET);
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return (RED "FORM GRADE TOO LOW" RESET);
}

std::ostream& operator<<(std::ostream &out, const Form &c)
{
	out << c.getName() 
		<< " form needs grade "
		<< c.getGradeToSign()
		<< std::endl;
	return out;
}
