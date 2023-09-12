/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:03:22 by maricard          #+#    #+#             */
/*   Updated: 2023/09/12 13:44:44 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Form"), _status(false), _grade(-1), _grade_nedded(-1)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const name, int const grade, int const grade_nedded) :
	_name(name), _status(false), _grade(grade), _grade_nedded(grade_nedded)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1 || grade_nedded < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150 || grade_nedded > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy) : _name(copy._name), _status(copy._status),
	_grade(copy._grade), _grade_nedded(copy._grade_nedded)
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

	Form tmp(other._name, other._grade, other._grade_nedded);
	*this = tmp;

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

int Form::getGrade() const
{
	return (this->_grade);
}

int Form::getGradeNedded() const
{
	return (this->_grade_nedded);
}

void Form::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->_grade_nedded)
		throw Form::GradeTooLowException();
	else
		this->_status = true;	
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("FORM GRADE TOO HIGH");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("FORM GRADE TOO LOW");
}

std::ostream& operator<<(std::ostream &out, const Form &c)
{
	out << c.getName() 
		<< " form needs grade "
		<< c.getGradeNedded()
		<< ", Bureaucrat grade "
		<< c.getGrade() 
		<< std::endl;
	return out;
}
