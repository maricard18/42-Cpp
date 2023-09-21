/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:17:41 by maricard          #+#    #+#             */
/*   Updated: 2023/09/21 11:43:50 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main( void )
{
	int 		array1[5] = {1, 2, 3, 4, 5};
	char 		array2[5] = {'a', 'b', 'c', 'd', 'e'};
	float 		array3[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::string array4[3] = {"goat1 ", "goat2 ", "goat3 "};
	
	std::cout << RED "Array 1: " << RESET;
	iter(array1, 5, print);
	std::cout << std::endl;

	std::cout << RED "Array 2: " << RESET;
	iter(array2, 5, print);
	std::cout << std::endl;

	std::cout << RED "Array 3: " << RESET;
	iter(array3, 5, print);
	std::cout << std::endl;

	std::cout << RED "Array 4: " << RESET;
	iter(array4, 3, print);
	std::cout << std::endl;

	return 0;
}
