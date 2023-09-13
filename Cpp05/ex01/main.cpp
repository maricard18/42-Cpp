/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:54:23 by maricard          #+#    #+#             */
/*   Updated: 2023/09/13 13:10:30 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	main_tests()
{
	try
	{
		Bureaucrat student("Mario", 10);
		Form form("Hospital", student.getGrade(), 11);
		
		//! grade lower than grade nedded
		//Bureaucrat student("Mario", 2);
		//Form form("Hospital", student.getGrade(), 1);
		
		//! grade nedded out of bounds
		//Bureaucrat student("Mario", 41);
		//Form form("Hospital", student.getGrade(), 0);
		
		std::cout << student;
		std::cout << form;

		form.beSigned(student);
		student.signForm(form);
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	catch(const Form::GradeTooHighException &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
}

int main()
{
	std::cout << std::endl 
			  << "\033[1;31m"
			  << "MAIN TESTS"
			  << "\033[0m" 
			  << std::endl 
			  << std::endl;
	main_tests();

	std::cout << std::endl;
	return 0;
}
