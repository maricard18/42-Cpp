/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:17:50 by maricard          #+#    #+#             */
/*   Updated: 2023/09/14 00:11:25 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) :
	AForm(copy)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm operator overload constructor called" 
			  << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (this->getStatus() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::FormNotExecutedException();
}

void	RobotomyRequestForm::action() const
{
	srand(time(0));

	std::cout << GREEN "* drilling noises *" RESET << std::endl;
	if (rand() % 2 == 0)
		std::cout << GREEN << this->_target 
				  << " has been robotomized successfully" 
				  << RESET << std::endl;
	else
		std::cout << RED << this->_target 
				  << " robotomization failed" 
				  << RESET << std::endl;
}

std::ostream& operator<<(std::ostream &out, const RobotomyRequestForm &c)
{
	out << c.getName() 
		<< " form to be signed needs grade "
		<< c.getGradeToSign()
		<< " and to be executed grade "
		<< c.getGradeToExecute()
		<< std::endl;
	return out;
}
