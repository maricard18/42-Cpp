/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:54:23 by maricard          #+#    #+#             */
/*   Updated: 2023/09/13 23:49:08 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

void	shrubbery_tests()
{
	try
	{
		//! ShrubberyCreationForm
		Bureaucrat person("Mario", 5);
		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("shrubbery request", "Office");
		
		if (rrf == NULL)
			return ;
		
		std::cout << person;

		rrf->beSigned(person);
		person.signForm(*rrf);
		rrf->execute(person);
		person.executeForm(*rrf);
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
		Bureaucrat person("Mario", 5);
		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bar");
		
		if (rrf == NULL)
			return ;
		
		std::cout << person;

		rrf->beSigned(person);
		person.signForm(*rrf);
		rrf->execute(person);
		person.executeForm(*rrf);
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
		Bureaucrat person("Mario", 10);
		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("presidential request", "Bedroom");
		
		if (rrf == NULL)
			return ;
		
		std::cout << person;

		rrf->beSigned(person);
		person.signForm(*rrf);
		rrf->execute(person);
		person.executeForm(*rrf);
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
