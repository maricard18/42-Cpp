/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:54:23 by maricard          #+#    #+#             */
/*   Updated: 2023/09/12 13:46:30 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	value_tests()
{
	try
	{
		//! grade in range
		Bureaucrat student("Mario", 149);

		//! grade will be lower than minimum grade
		//Bureaucrat student("Mario", 150);
		
		std::cout << student;
		student.decrementGrade();
		std::cout << student;
	}
	catch(const Bureaucrat::GradeTooHighException &b)
	{
		std::cout << std::endl << b.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &b)
	{
		std::cout << std::endl << b.what() << std::endl << std::endl;
	}

	try
	{
		//! grade in range
		Bureaucrat student("Mario", 2);

		//! grade will be higher than maximum grade
		//Bureaucrat student("Mario", 1);
		
		std::cout << student;
		student.incrementGrade();
		std::cout << student;
	}
	catch(const Bureaucrat::GradeTooHighException &b)
	{
		std::cout << std::endl << b.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &b)
	{
		std::cout << std::endl << b.what() << std::endl;
	}
}

void	main_tests()
{
	try
	{
		//! grade in range
		Bureaucrat student("Mario", 30);

		//! grade lower than minimum grade
		//Bureaucrat student("Mario", 151);

		//! grade higher than maximum grade
		//Bureaucrat student("Mario", 0);
		
		std::cout << student;
	}
	catch(const Bureaucrat::GradeTooHighException &b)
	{
		std::cout << std::endl << b.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &b)
	{
		std::cout << std::endl << b.what() << std::endl;
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

	std::cout << std::endl 
			  << "\033[1;31m"
			  << "EXTRA TESTS" 
			  << "\033[0m" 
			  << std::endl 
			  << std::endl;  
	value_tests();

	std::cout << std::endl;
	return 0;
}
