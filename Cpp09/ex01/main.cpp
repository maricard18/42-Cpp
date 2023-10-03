/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:38:52 by maricard          #+#    #+#             */
/*   Updated: 2023/10/03 15:39:35 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

void	rpn(char *input)
{
	RPN		rpn;
	std::stringstream	stream(input);

	if (!rpn.checkIfValid(stream.str()))
		throw std::runtime_error("invalid characters");
	
	rpn.solveExpression(stream.str());
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: usage" << std::endl;
		std::cerr << "./RPN \"expression\"" << std::endl;
		return EXIT_FAILURE;
	}

	try
	{
		rpn(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << "Error: " << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}
