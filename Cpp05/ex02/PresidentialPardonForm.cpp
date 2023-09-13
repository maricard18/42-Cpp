/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:19:30 by maricard          #+#    #+#             */
/*   Updated: 2023/09/14 00:12:53 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : 
	AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) :
	AForm(copy)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm operator overload constructor called" 
			  << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (this->getStatus() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::FormNotExecutedException();
}

void	PresidentialPardonForm::action() const
{
	std::cout << GREEN << this->_target 
			  << " has been pardoned by Zafod Beeblebrox"
			  << RESET << std::endl;
}

std::ostream& operator<<(std::ostream &out, const PresidentialPardonForm &c)
{
	out << c.getName() 
		<< " form to be signed needs grade "
		<< c.getGradeToSign()
		<< " and to be executed grade "
		<< c.getGradeToExecute()
		<< std::endl;
	return out;
}
