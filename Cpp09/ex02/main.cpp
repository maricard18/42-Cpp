/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:42:23 by maricard          #+#    #+#             */
/*   Updated: 2023/09/28 13:37:22 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

bool	validateArguments(int argc, char **argv) {
	std::stringstream	stream;
	
	for (int i = 1; i < argc; i++) {
		std::stringstream	input(argv[i]);
		int number = 0;
		
		if (!(input >> number))
			return false;
		else if (i + 1 == argc)
			stream << number;
		else
			stream << number << " ";
	}

	std::cout << stream.str() << std::endl;
	
	return true;
}

int main (int argc, char **argv) {
	if (argc < 2)
		std::cerr << RED << "Error: invalid usage" << std::endl;	
	else if (!validateArguments(argc, argv))
		std::cerr << RED << "Error: invalid arguments" << std::endl;
}
