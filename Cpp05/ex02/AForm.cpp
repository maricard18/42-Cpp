/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:03:22 by maricard          #+#    #+#             */
/*   Updated: 2023/09/12 13:44:44 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : 
	_name(""), _status(false), _grade_to_sign(0), _grade_to_execute(0)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string const name, int const grade_to_sign, int const grade_to_execute) :
	_name(name), _status(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	std::cout << "AForm constructor called" << std::endl;
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw AForm::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy) : _name(copy._name), _status(copy._status),
	_grade_to_sign(copy._grade_to_sign), _grade_to_execute(copy._grade_to_execute)
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = copy;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
	std::cout << "AForm operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getStatus()
{
	return (this->_status);
}

int AForm::getGradeToSign() const
{
	return (this->_grade_to_sign);
}

int AForm::getGradeToExecute() const
{
	return (this->_grade_to_execute);
}

void AForm::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->_grade_to_sign)
		this->_status = false;
	else
		this->_status = true;	
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ( RED "FORM GRADE TOO HIGH" RESET);
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return (RED "FORM GRADE TOO LOW" RESET);
}

const char	*AForm::FormNotSignedException::what() const throw()
{
	return (RED "FORM NOT SIGNED" RESET);
}

const char	*AForm::FormNotExecutedException::what() const throw()
{
	return (RED "FORM NOT EXECUTED" RESET);
}

std::ostream& operator<<(std::ostream &out, const AForm &c)
{
	out << c.getName() 
		<< " form to be signed needs grade "
		<< c.getGradeToSign()
		<< " and to be executed grade "
		<< c.getGradeToExecute()
		<< std::endl;
	return out;
}
