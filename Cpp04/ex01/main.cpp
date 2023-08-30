/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:26:07 by maricard          #+#    #+#             */
/*   Updated: 2023/08/30 15:05:56 by maricard         ###   ########.fr       */
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
	
	// Defining that the first half of the array are Dogs
	// Ang put Dog ideias into their Brain
	for (int i = 0; i < 5; i++)
	{
		Animals[i] = new Dog();
		//Animal[i]->storeIdeas();
	}

	// Defining that the first half of the array are Cats
	// Ang put Cat ideias into their Brain
	for (int i = 5; i < 10; i++)
	{
		Animals[i] = new Cat();
		//Animal[i]->storeIdeas();
	}

	//delete [] Animals;
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
