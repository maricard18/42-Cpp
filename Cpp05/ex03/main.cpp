/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:54:23 by maricard          #+#    #+#             */
/*   Updated: 2023/09/13 20:51:48 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void	presidential_tests()
{
	try
	{
		//! PresidentialPardonForm
		Bureaucrat person3("Mario", 5);
		AForm *presidential_form = new PresidentialPardonForm("kitchen");
		
		std::cout << person3;
		std::cout << presidential_form;

		presidential_form->beSigned(person3);
		person3.signForm(*presidential_form);
		presidential_form->execute(person3);
		person3.executeForm(*presidential_form);

		delete presidential_form;
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	catch(const AForm::GradeTooHighException &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	catch(const AForm::GradeTooLowException &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	catch(const AForm::FormNotSignedException &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	catch(const AForm::FormNotExecutedException &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
}

void	main_tests()
{
	Intern someRandomIntern;
	AForm* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}

int main()
{
	std::cout << std::endl 
			  << "\033[1;31mSHRUBBERY TESTS \033[0m" 
			  << std::endl << std::endl;
	main_tests();

	//std::cout << std::endl 
	//		  << "\033[1;31mROBOTOMY TESTS \033[0m" 
	//		  << std::endl << std::endl;
	//robotomy_tests();

	//std::cout << std::endl 
	//		  << "\033[1;31mPRESDENTIAL TESTS \033[0m" 
	//		  << std::endl << std::endl;
	//presidential_tests();

	std::cout << std::endl;
	return 0;
}
