/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:12:06 by maricard          #+#    #+#             */
/*   Updated: 2023/09/20 20:42:10 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define VALUE 5

void	value_tests()
{
    Array<int> array(VALUE);
	Array<int> empty(array);

	std::cout << RED << "VALUE AT CONSTRUCTION" << RESET << std::endl;
	std::cout << "array: ";
	::iter(array.getArray(), array.size(), print);
	
	srand(time(0));
	for (int i = 0; i < VALUE; i++)
    {
        const int value = rand() % 21;
        array[i] = value;
    }
	
	std::cout << RED << "VALUE OF ARRAY" << RESET << std::endl;
	std::cout << "array: ";
	::iter(array.getArray(), array.size(), print);
	
	try
	{
		array[0] = 42;
		
		std::cout << RED << "VALUE OF ARRAY" << RESET << std::endl;
		std::cout << "array: ";
		::iter(array.getArray(), array.size(), print);

		std::cout << RED << "VALUE AT POSITION [0]" << RESET << std::endl;
		std::cout << "array: ";
		::iter(array.getArray(), 1, print);
		
		// access out of range
		array[VALUE] = 42;
		
		std::cout << RED << "VALUE OF ARRAY" << RESET << std::endl;
		std::cout << "array: ";
		::iter(array.getArray(), array.size(), print);
	}
	catch (std::exception &e)
	{
		std::cout << WHITE << e.what() << RESET << std::endl;
	}

}

void	string_tests()
{
    Array<std::string> array(VALUE);

	std::cout << RED << "VALUE AT CONSTRUCTION" << RESET << std::endl;
	std::cout << "array: ";
	::iter(array.getArray(), array.size(), print);
	
	for (int i = 0; i < VALUE; i++)
    {
        std::string value = "Hello";
        array[i] = value;
    }
	
	std::cout << RED << "VALUE OF ARRAY" << RESET << std::endl;
	std::cout << "array: ";
	::iter(array.getArray(), array.size(), print);
	
	try
	{
		array[0] = "Bye";
		
		std::cout << RED << "VALUE OF ARRAY" << RESET << std::endl;
		std::cout << "array: ";
		::iter(array.getArray(), array.size(), print);
		
		array[VALUE] = "Bye";
		
		std::cout << RED << "VALUE OF ARRAY" << RESET << std::endl;
		std::cout << "array: ";
		::iter(array.getArray(), array.size(), print);
	}
	catch (std::exception &e)
	{
		std::cout << WHITE << e.what() << RESET << std::endl;
	}

}

void	copy_tests()
{
	Array<int> array(VALUE);	
	
	srand(time(0));
	for (int i = 0; i < VALUE; i++)
    {
        const int value = rand() % 21;
        array[i] = value;
    }
	
	Array<int> empty(array);

	std::cout << RED << "COPY CONSTRUCTOR TEST" << RESET << std::endl;
	std::cout << "array: ";
	::iter(array.getArray(), array.size(), print);
	std::cout << "empty: ";
	::iter(empty.getArray(), array.size(), print);
	std::cout << std::endl;

	std::cout << RED << "COPY ASSIGNMENT OVERLOADER TEST" << RESET << std::endl;
	Array<int> tmp;
	tmp = array;
	std::cout << "tmp: ";
	::iter(tmp.getArray(), array.size(), print);
}

int main()
{
	std::cout << std::endl 
			  << YELLOW
			  << "VALUE TESTS" 
			  << RESET 
			  << std::endl
			  << std::endl; 
	value_tests();

	std::cout << std::endl 
			  << YELLOW
			  << "STRING TESTS" 
			  << RESET 
			  << std::endl
			  << std::endl; 
	string_tests();

	std::cout << std::endl 
			  << YELLOW
			  << "COPY TESTS" 
			  << RESET
			  << std::endl 
			  << std::endl;  
	copy_tests();

	std::cout << std::endl;
	return 0;
}
