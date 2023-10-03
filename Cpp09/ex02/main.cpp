/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:42:23 by maricard          #+#    #+#             */
/*   Updated: 2023/10/03 08:51:31 by maricard         ###   ########.fr       */
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
	pmerge.sortVecPairs();
	pmerge.sortVecMainChain();
	pmerge.insertVec();

	stream.clear();
	stream.seekg(0, std::ios::beg);
	pmerge.createDeqPairs(stream);
	pmerge.sortDeqPairs();
	pmerge.sortDeqMainChain();
	pmerge.insertDeq();

	pmerge.checkIfVecSorted();
	pmerge.checkIfDeqSorted();
}

int main (int argc, char **argv) 
{
	if (argc < 3)
	{
		std::cerr << RED << "Error: invalid usage" << std::endl;
		return EXIT_FAILURE;
	}
	
	try
	{
		mergeInsertionAlgorithm(argc, argv);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << "Error: " << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}
