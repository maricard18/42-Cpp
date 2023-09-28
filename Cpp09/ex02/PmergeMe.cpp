/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:25:21 by maricard          #+#    #+#             */
/*   Updated: 2023/09/28 16:27:05 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	*this = copy;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

bool	PmergeMe::validateArguments(int argc, char **argv, std::stringstream& stream) 
{
	for (int i = 1; i < argc; i++) {
		std::stringstream	input(argv[i]);
		int number = 0;
		
		if (!(input >> number))
			return false;
		else if (number < 0)
			return false;
		else if (i + 1 == argc)
			stream << number;
		else
			stream << number << " ";
	}
	
	return true;
}

void	PmergeMe::createPairs(std::stringstream& stream)
{
	int number = 0;
	
	while (stream >> number) {
		_pendVec.push_back(number);
		_pendDeq.push_back(number);
		
		if (stream >> number) {
			_mainVec.push_back(number);
			_mainDeq.push_back(number);
		}
	}
}

void	PmergeMe::sortPairs()
{
	for (int i = 0; _mainVec[i]; i++) {
		if ( _mainVec[i] < _pendVec[i]) {
			int tmp;

			tmp = _mainVec[i];
			_mainVec[i] = _pendVec[i];
			_pendVec[i] = tmp;
		}
	}

	for (int i = 0; _mainDeq[i]; i++) {
		if ( _mainDeq[i] < _pendDeq[i]) {
			int tmp;

			tmp = _mainDeq[i];
			_mainDeq[i] = _pendDeq[i];
			_pendDeq[i] = tmp;
		}
	}
}

void	PmergeMe::printVec(int id)
{
	if (id != 1 && id != 2)
		throw std::runtime_error("invalid id");

	if (id == 1) {
		std::cout << YELLOW "main vec: " RESET;
		
		for (std::vector<int>::iterator it = _mainVec.begin(); it != _mainVec.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	else {
		std::cout << YELLOW "pend vec: " RESET;
		
		for (std::vector<int>::iterator it = _pendVec.begin(); it != _pendVec.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
}

void	PmergeMe::printDeq(int id)
{
	if (id != 1 && id != 2)
		throw std::runtime_error("invalid id");

	if (id == 1) {
		std::cout << YELLOW "main deque: " RESET;
		
		for (std::deque<int>::iterator it = _mainDeq.begin(); it != _mainDeq.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	else {
		std::cout << YELLOW "pend deque: " RESET;
		
		for (std::deque<int>::iterator it = _pendDeq.begin(); it != _pendDeq.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
}
