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

AForm::AForm() : _name("AForm"), _status(false), _grade(-1), _grade_nedded(-1)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string const name, int const grade, int const grade_nedded) :
	_name(name), _status(false), _grade(grade), _grade_nedded(grade_nedded)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1 || grade_nedded < 1)
		throw AForm::GradeTooHighException();
	else if (grade > 150 || grade_nedded > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy) : _name(copy._name), _status(copy._status),
	_grade(copy._grade), _grade_nedded(copy._grade_nedded)
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

	AForm tmp(other._name, other._grade, other._grade_nedded);
	*this = tmp;

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

int AForm::getGrade() const
{
	return (this->_grade);
}

int AForm::getGradeNedded() const
{
	return (this->_grade_nedded);
}

void AForm::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->_grade_nedded)
		throw AForm::GradeTooLowException();
	else
		this->_status = true;	
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("AFORM GRADE TOO HIGH");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("AFORM GRADE TOO LOW");
}

std::ostream& operator<<(std::ostream &out, const AForm &c)
{
	out << c.getName() 
		<< " form needs grade "
		<< c.getGradeNedded()
		<< ", Bureaucrat grade "
		<< c.getGrade() 
		<< std::endl;
	return out;
}
