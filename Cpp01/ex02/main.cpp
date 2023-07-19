/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:48:08 by maricard          #+#    #+#             */
/*   Updated: 2023/07/07 16:11:52 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << &string << std::endl
			  << stringPTR << std::endl
			  << &stringREF << std::endl;

	std::cout << string << std::endl
			  << *stringPTR << std::endl
			  << stringREF << std::endl; 
}
