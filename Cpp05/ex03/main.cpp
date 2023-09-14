/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:54:23 by maricard          #+#    #+#             */
/*   Updated: 2023/09/14 14:59:05 by maricard         ###   ########.fr       */
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
		//! ShrubberyCreationForm (145, 137)
		Bureaucrat person("Mario", 130);
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
	catch(std::exception &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
}

void	robotomy_tests()
{
	try
	{
		//! RobotomyRequestForm (72, 45)
		Bureaucrat person("Mario", 30);
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
	catch(std::exception &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
}

void	presidential_tests()
{
	try
	{
		//! PresidentialPardonForm (25, 5)
		Bureaucrat person("Mario", 1);
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
	catch(std::exception &e)
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
