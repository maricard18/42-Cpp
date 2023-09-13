/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:54:23 by maricard          #+#    #+#             */
/*   Updated: 2023/09/14 00:11:42 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

void	shrubbery_tests()
{
	try
	{
		//! ShrubberyCreationForm
		Bureaucrat person("Mario", 100);
		AForm *shrubbery_form = new ShrubberyCreationForm("bathroom");
	
		std::cout << person;
		//std::cout << shrubbery_form;

		shrubbery_form->beSigned(person);
		person.signForm(*shrubbery_form);
		shrubbery_form->execute(person);
		person.executeForm(*shrubbery_form);

		delete shrubbery_form;
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

void	robotomy_tests()
{
	try
	{
		//! RobotomyRequestForm
		Bureaucrat person("Mario", 20);
		AForm *robotomy_form = new RobotomyRequestForm("bedroom");
		
		std::cout << person;
		//std::cout << robotomy_form;

		robotomy_form->beSigned(person);
		person.signForm(*robotomy_form);
		robotomy_form->execute(person);
		person.executeForm(*robotomy_form);

		delete robotomy_form;
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

void	presidential_tests()
{
	try
	{
		//! PresidentialPardonForm
		Bureaucrat person("Mario", 5);
		AForm *presidential_form = new PresidentialPardonForm("kitchen");
		
		std::cout << person;
		std::cout << presidential_form;

		presidential_form->beSigned(person);
		person.signForm(*presidential_form);
		presidential_form->execute(person);
		person.executeForm(*presidential_form);

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

int main()
{
	std::cout << std::endl 
			  << "\033[1;31mSHRUBBERY TESTS \033[0m" 
			  << std::endl << std::endl;
	shrubbery_tests();

	std::cout << std::endl 
			  << "\033[1;31mROBOTOMY TESTS \033[0m" 
			  << std::endl << std::endl;
	robotomy_tests();

	std::cout << std::endl 
			  << "\033[1;31mPRESDENTIAL TESTS \033[0m" 
			  << std::endl << std::endl;
	presidential_tests();

	std::cout << std::endl;
	return 0;
}
