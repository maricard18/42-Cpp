/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:26:07 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 19:35:16 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

void	extra_tests()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	i->makeSound(); // should output the cat sound, but it won't work.
	meta->makeSound(); // will output the original animal sound.

	delete meta;
	delete i;
}

void	main_tests()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // will output the cat sound!
	j->makeSound(); // will output the dog sound!
	meta->makeSound(); // will output original the animal sound!

	delete meta;
	delete j;
	delete i;	
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
