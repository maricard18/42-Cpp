/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:36:30 by maricard          #+#    #+#             */
/*   Updated: 2023/09/22 15:21:45 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <vector>
# include <deque>

int main()
{
    // Using std::vector
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // Using std::deque
    std::deque<int> deq;
    deq.push_back(4);
    deq.push_back(5);
    deq.push_back(6);

    std::cout << RED << "vec: " << WHITE;
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
	std::cout << std::endl;
    
    std::cout << RED << "deq: " << WHITE;
    for (unsigned int i = 0; i < deq.size(); i++)
    {
        std::cout << deq[i] << " ";
    }
	std::cout << std::endl << std::endl;

	try
	{
		std::cout << YELLOW << "Searching in vec..." << RESET << std::endl;
		easyfind(vec, 3);
		std::cout << std::endl;

		std::cout << YELLOW << "Searching in deq..." << RESET << std::endl;
		easyfind(deq, 3);
	}
	catch(std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl << std::endl;
	}

    return 0;
}
