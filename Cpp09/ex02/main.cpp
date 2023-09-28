/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:42:23 by maricard          #+#    #+#             */
/*   Updated: 2023/09/28 17:03:23 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

void	mergeInsertionAlgorithm(int argc, char **argv) 
{
	std::stringstream 	stream;
	PmergeMe			pmerge;

	if (!pmerge.validateArguments(argc, argv, stream))
		throw std::runtime_error("invalid arguments");
	
	pmerge.createVecPairs(stream);
	stream.clear();
	stream.seekg(0, std::ios::beg);
	pmerge.createDeqPairs(stream);

	pmerge.printVec(1);
	pmerge.printVec(2);
	pmerge.printDeq(1);
	pmerge.printDeq(2);

	pmerge.sortVecPairs();
	pmerge.sortDeqPairs();

	pmerge.printVec(1);
	pmerge.printVec(2);
	pmerge.printDeq(1);
	pmerge.printDeq(2);
}

int main (int argc, char **argv) 
{
	if (argc < 2)
		std::cerr << RED << "Error: invalid usage" << std::endl;	

	try
	{
		mergeInsertionAlgorithm(argc, argv);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << "Error: " << e.what() << std::endl;
	}

	return 0;
}