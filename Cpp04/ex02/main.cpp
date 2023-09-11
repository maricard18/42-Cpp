/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:26:07 by maricard          #+#    #+#             */
/*   Updated: 2023/09/11 10:58:43 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"

//void	extra_tests()
//{
//	Animal test; // This should not compile
//}

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

	//std::cout << std::endl << "\033[1;31m"
	//		  << "EXTRA TESTS"
	//		  << "\033[0m" << std::endl << std::endl;
	//extra_tests();

	std::cout << std::endl;
	return 0;
}
