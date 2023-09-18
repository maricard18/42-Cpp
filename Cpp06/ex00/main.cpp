/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:03:54 by maricard          #+#    #+#             */
/*   Updated: 2023/09/18 12:29:50 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

void	scalar_converter(char *input)
{
	try
	{
		ScalarConverter scalar(input);
		scalar.convert();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		std::cout << "Usage: ./convert [value]" << std::endl;
		return (0);
	}
	
	scalar_converter(argv[1]);
	return (1);
}
