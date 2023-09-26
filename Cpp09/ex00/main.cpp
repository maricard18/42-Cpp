/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:16:56 by maricard          #+#    #+#             */
/*   Updated: 2023/09/26 23:31:29 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	bitcoin_exchange(char *input)
{
	BitcoinExchange	btc;

	btc.readDataBase();
	btc.readInputFile(input);
	//btc.print();
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: usage" << std::endl;
		std::cerr << "./btc input_file" << std::endl;
		return EXIT_FAILURE;
	}
	
	try
	{
		bitcoin_exchange(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << "Error: " << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}
