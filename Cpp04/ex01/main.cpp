/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:26:07 by maricard          #+#    #+#             */
/*   Updated: 2023/09/07 09:38:43 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"

void	extra_tests()
{
	Cat *Cat1 = new Cat();
	Cat *Cat2 = new Cat(*Cat1);
	
	// The address of 1 and 2 should be different
	std::cout << "---------------------------" << std::endl;
	std::cout << "Cat1 = " << &Cat1 << std::endl;
	std::cout << "Cat2 = " << &Cat2 << std::endl;
	std::cout << "---------------------------" << std::endl;

	delete Cat1;
	delete Cat2;
}


void	main_tests()
{
	Animal *Animals[2];
	int  	i = 0;

	for (; i < 1; i++)
		Animals[i] = new Dog();

	for (; i < 2; i++)
		Animals[i] = new Cat();

	for (int k = 0; k < 2; k++)
		delete Animals[k];
}

int main()
{
	std::cout << std::endl << "\033[1;31m"
			  << "MAIN TESTS"
			  << "\033[0m" << std::endl << std::endl;
	main_tests();

	std::cout << std::endl << "\033[1;31m"
			  << "EXTRA TESTS" 
			  << "\033[0m" << std::endl << std::endl;  
	extra_tests();

	std::cout << std::endl;
	return 0;
}
