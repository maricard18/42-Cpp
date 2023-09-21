/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:37:49 by maricard          #+#    #+#             */
/*   Updated: 2023/09/21 11:43:20 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	
	std::cout << RED "Before swap" << RESET << std::endl;
	std::cout << "a = " << GREEN << a << RESET << std::endl;
	std::cout << "b = " << GREEN << b << RESET  << std::endl;
	
	swap( a, b );
	std::cout << RED "After swap" << RESET << std::endl;
	std::cout << "a = " << GREEN << a << RESET << std::endl;
	std::cout << "b = " << GREEN << b << RESET  << std::endl;

	std::cout << RED "min & max" << RESET << std::endl;
	std::cout << "min(a, b) = " << GREEN << ::min(a, b) << RESET << std::endl;
	std::cout << "max(a, b) = " << GREEN << ::max(a, b) << RESET << std::endl;
	
	std::cout << RED "------------------" RESET << std::endl;

	std::string c = "goat1";
	std::string d = "goat2";
	
	std::cout << RED "Before swap" << RESET << std::endl;
	std::cout << "c = " << GREEN << c << RESET << std::endl;
	std::cout << "d = " << GREEN << d << RESET  << std::endl;
	
	swap(c, d);
	std::cout << RED "After swap" << RESET << std::endl;
	std::cout << "c = " << GREEN << c << RESET << std::endl;
	std::cout << "d = " << GREEN << d << RESET  << std::endl;

	std::cout << RED "min & max" << RESET << std::endl;
	std::cout << "min(c, d) = " << GREEN << ::min(c, d) << RESET << std::endl;
	std::cout << "max(c, d) = " << GREEN << ::max(c, d) << RESET << std::endl;
	
	return 0;
}
