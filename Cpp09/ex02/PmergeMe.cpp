/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:25:21 by maricard          #+#    #+#             */
/*   Updated: 2023/09/30 14:30:55 by maricard         ###   ########.fr       */
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
	for (int i = 1; i < argc; i++)
	{
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

void	PmergeMe::createVecPairs(std::stringstream& stream)
{
	int number = 0;
	
	while (stream >> number)
	{
		_pendVec.push_back(number);
		
		if (stream >> number)
		{
			_mainVec.push_back(number);
		}
	}
}

void	PmergeMe::createDeqPairs(std::stringstream& stream)
{
	int number = 0;
	
	while (stream >> number)
	{
		_pendDeq.push_back(number);
		
		if (stream >> number)
		{
			_mainDeq.push_back(number);
		}
	}
}

void	PmergeMe::sortVecPairs()
{	
	for (size_t i = 0; i < _mainVec.size(); i++)
	{
		if ( _mainVec[i] > _pendVec[i])
		{
			int tmp;

			tmp = _mainVec[i];
			_mainVec[i] = _pendVec[i];
			_pendVec[i] = tmp;
		}
	}
}

void	PmergeMe::sortDeqPairs()
{
	for (size_t i = 0; i < _mainDeq.size(); i++)
	{
		if ( _mainDeq[i] > _pendDeq[i])
		{
			int tmp;

			tmp = _mainDeq[i];
			_mainDeq[i] = _pendDeq[i];
			_pendDeq[i] = tmp;
		}
	}
}

void	PmergeMe::sortVecMainChain()
{
	std::vector<int>::iterator	mainIt = _mainVec.begin();
	std::vector<int>::iterator	pendIt = _pendVec.begin();
	
	while (mainIt + 1 != _mainVec.end())
	{
		if (*mainIt > *(mainIt + 1))
		{
			std::iter_swap(mainIt, mainIt + 1);
			std::iter_swap(pendIt, pendIt + 1);
			sortVecMainChain();
		}
		mainIt++;
		pendIt++;
	}
}

void	PmergeMe::sortDeqMainChain()
{
	std::deque<int>::iterator	mainIt = _mainDeq.begin();
	std::deque<int>::iterator	pendIt = _pendDeq.begin();
	
	while (mainIt + 1 != _mainDeq.end())
	{
		if (*mainIt > *(mainIt + 1))
		{
			std::iter_swap(mainIt, mainIt + 1);
			std::iter_swap(pendIt, pendIt + 1);
			sortDeqMainChain();
		}
		mainIt++;
		pendIt++;
	}
}

void PmergeMe::vecBinarySearch(int number)
{
	int start = 0;
	int	middle = 0;
	int end = _mainVec.size() - 1;

	while (start <= end)
	{
		middle = (start + end) / 2;
		if (number > _mainVec[middle])
			start = middle + 1;
		else if (number < _mainVec[middle])
			end = middle - 1;
		else
		{
			_mainVec.insert(_mainVec.begin() + middle, number);
			return ;
		}
	}

	_mainVec.insert(_mainVec.begin() + start, number);
}

void PmergeMe::deqBinarySearch(int number)
{
	int start = 0;
	int	middle = 0;
	int end = _mainDeq.size() - 1;

	while (start <= end)
	{
		middle = (start + end) / 2;
		if (number > _mainDeq[middle])
			start = middle + 1;
		else if (number < _mainDeq[middle])
			end = middle - 1;
		else
		{
			_mainDeq.insert(_mainDeq.begin() + middle, number);
			return ;
		}
	}

	_mainDeq.insert(_mainDeq.begin() + start, number);
}

std::vector<int>	PmergeMe::buildVecJacobSequence()
{
	std::vector<int>	jacob;
	std::vector<int>	index;
	int	size = _pendVec.size();
	unsigned long k;
	int num = 0;
	int i = 0;

	jacob.push_back(0);
	jacob.push_back(1);
	for (; num < size;)
	{
		num = jacob.back() + (jacob[jacob.size() - 2] * 2);
		jacob.push_back(num);
	}

	index.push_back(1);
	for (k = 3; k < jacob.size(); k++)
	{
		i = jacob[k];
		num = jacob[k] - jacob[k - 1];
		for (int j = num; j > 0; j--)
			index.push_back(i--);
	}

	////print jacob
	// for (std::vector<int>::iterator it = jacob.begin(); it != jacob.end(); it++)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;

	////print index
	// for (std::vector<int>::iterator it = index.begin(); it != index.end(); it++)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;

	return index;
}

std::deque<int>	PmergeMe::buildDeqJacobSequence()
{
	std::deque<int>	jacob;
	std::deque<int>	index;
	int	size = _pendDeq.size();
	unsigned long k;
	int num = 0;
	int i = 0;

	jacob.push_back(0);
	jacob.push_back(1);
	for (; num < size;)
	{
		num = jacob.back() + (jacob[jacob.size() - 2] * 2);
		jacob.push_back(num);
	}

	index.push_back(1);
	for (k = 3; k < jacob.size(); k++)
	{
		i = jacob[k];
		num = jacob[k] - jacob[k - 1];
		for (int j = num; j > 0; j--)
			index.push_back(i--);
	}

	////print jacob
	// for (std::vector<int>::iterator it = jacob.begin(); it != jacob.end(); it++)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;

	////print index
	// for (std::vector<int>::iterator it = index.begin(); it != index.end(); it++)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;

	return index;
}

void	PmergeMe::insertVec()
{
	std::vector<int>	jacob = buildVecJacobSequence();
	int jacobSize = jacob.size();
	int pendSize = _pendVec.size() - 1;
	int i = 0;
	int index = 0;

	vecBinarySearch(_pendVec[0]);
	for (; i < jacobSize; i++)
	{
		if (jacob[i] <= pendSize)
		{
			index = jacob[i];
			vecBinarySearch(_pendVec[index]);
		}
		else
			continue;
	}

	printVec(MAIN);
}

void	PmergeMe::insertDeq()
{
	std::deque<int>	jacob = buildDeqJacobSequence();
	int jacobSize = jacob.size();
	int pendSize = _pendDeq.size() - 1;
	int i = 0;
	int index = 0;

	deqBinarySearch(_pendDeq[0]);
	for (; i < jacobSize; i++)
	{
		if (jacob[i] <= pendSize)
		{
			index = jacob[i];
			deqBinarySearch(_pendDeq[index]);
		}
		else
			continue;
	}

	printDeq(MAIN);
}

void	PmergeMe::printVec(int id)
{
	if (id != MAIN && id != PEND)
		throw std::runtime_error("invalid id");

	if (id == MAIN)
	{
		std::cout << YELLOW "main vec: " RESET;
		
		for (std::vector<int>::iterator it = _mainVec.begin(); it != _mainVec.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	else
	{
		std::cout << YELLOW "pend vec: " RESET;
		
		for (std::vector<int>::iterator it = _pendVec.begin(); it != _pendVec.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
}

void	PmergeMe::printDeq(int id)
{
	if (id != MAIN && id != PEND)
		throw std::runtime_error("invalid id");

	if (id == MAIN)
	{
		std::cout << YELLOW "main deq: " RESET;
		
		for (std::deque<int>::iterator it = _mainDeq.begin(); it != _mainDeq.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	else
	{
		std::cout << YELLOW "pend deq: " RESET;
		
		for (std::deque<int>::iterator it = _pendDeq.begin(); it != _pendDeq.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
}
