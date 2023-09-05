/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:26:07 by maricard          #+#    #+#             */
/*   Updated: 2023/09/05 12:36:30 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

void	extra_tests()
{
}

void	main_tests()
{
	Animal *Animals[10];
	int  	i = 0;
	
	// Defining that the first half of the array are Dogs
	// put Dog ideias into their Brain
	for (; i < 5; i++)
	{
		Animals[i] = new Dog();
		Animals[i]->storeIdeas();
	}

	// Defining that the first half of the array are Cats
	// put Cat ideias into their Brain
	for (; i < 10; i++)
	{
		Animals[i] = new Cat();
		Animals[i]->storeIdeas();
	}

	for (int k = 0; k < 10; k++)
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
