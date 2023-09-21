/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:11:00 by maricard          #+#    #+#             */
/*   Updated: 2023/09/21 18:31:46 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

void	 main_tests()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try
	{
		std::cout << WHITE << "trying to add more numbers" << std::endl;
		sp.addNumber(20);
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl << std::endl;
	}
	
	sp.printVec();
	
	std::cout << GREEN << "Shortest Span: " << WHITE;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << GREEN << "Longest Span: " << WHITE;
	std::cout << sp.longestSpan() << RESET << std::endl << std::endl;

	Span	tmp;

	try
	{
		std::cout << WHITE << "trying to check values" << std::endl;
		tmp.shortestSpan();
		tmp.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void	numbers_tests()
{
	Span sp = Span(10001);
	
	sp.addManyNumbers(0, 10000);

	sp.printVec();
	
	std::cout << YELLOW << "Shortest Span: " << WHITE;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << YELLOW << "Longest Span: " << WHITE;
	std::cout << sp.longestSpan() << RESET << std::endl << std::endl;
}

int main()
{
	std::cout << std::endl 
			  << YELLOW
			  << "MAIN TESTS" 
			  << RESET 
			  << std::endl
			  << std::endl; 
	main_tests();

	std::cout << std::endl 
			  << YELLOW
			  << "NUMBERS TESTS" 
			  << RESET 
			  << std::endl
			  << std::endl; 
	numbers_tests();

	//std::cout << std::endl 
	//		  << YELLOW
	//		  << "THROW TESTS" 
	//		  << RESET
	//		  << std::endl 
	//		  << std::endl;  
	//throw_tests();

	std::cout << std::endl;
	return 0;
}