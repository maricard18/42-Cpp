/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:42:23 by maricard          #+#    #+#             */
/*   Updated: 2023/10/03 12:27:45 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

double	sortWithVector(std::stringstream &stream, PmergeMe &pmerge)
{
	clock_t start = clock();
	
	pmerge.createVecPairs(stream);
	pmerge.sortVecPairs();
	pmerge.sortVecMainChain();
	pmerge.insertVec();
	
	clock_t end = clock();
	double vecTime = double(end - start) / double(CLOCKS_PER_SEC);
	
	return vecTime;
}

double	sortWithDeque(std::stringstream &stream, PmergeMe &pmerge)
{
	clock_t start = clock();
	
	stream.clear();
	stream.seekg(0, std::ios::beg);
	pmerge.createDeqPairs(stream);
	pmerge.sortDeqPairs();
	pmerge.sortDeqMainChain();
	pmerge.insertDeq();
	
	clock_t end = clock();
	double deqTime = double(end - start) / double(CLOCKS_PER_SEC);
	
	return deqTime;
}

void	mergeInsertionAlgorithm(int argc, char **argv) 
{
	std::stringstream 	stream;
	PmergeMe			pmerge;

	if (!pmerge.validateArguments(argc, argv, stream))
		throw std::runtime_error("invalid arguments");
		
	double vecTime = sortWithVector(stream, pmerge);
	double deqTime = sortWithDeque(stream, pmerge);

	std::cout << YELLOW "Before: " WHITE;
	pmerge.displayUnsortedSequence(argc, argv);
	std::cout << YELLOW "After : " WHITE;
	pmerge.displaySortedSequence();
	pmerge.displayTime(vecTime, deqTime);
	
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
