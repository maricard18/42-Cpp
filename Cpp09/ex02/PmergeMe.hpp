/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:23:11 by maricard          #+#    #+#             */
/*   Updated: 2023/10/03 15:49:04 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <vector>
# include <deque>
# include <math.h>
# include <algorithm>
# include <ctime>

# define MAIN 1
# define PEND 2

# define RED 	"\033[1;31m"
# define GREEN 	"\033[1;32m"
# define YELLOW "\033[1;33m"
# define WHITE 	"\033[1;37m"
# define RESET 	"\033[0m"\

class PmergeMe
{
	private:
		std::vector<int>	_mainVec;
		std::vector<int>	_pendVec;
		bool				_isVecSorted;

	private:
		std::deque<int>		_mainDeq;
		std::deque<int>		_pendDeq;
		bool				_isDeqSorted;

	public:
		//! Constructors and destructor
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		~PmergeMe();

		//! Operator overloading
		PmergeMe& operator=(const PmergeMe& other);

		//! Functions
		bool	validateArguments(int argc, char **argv, std::stringstream& stream);
		void	createVecPairs(std::stringstream& stream);
		void	createDeqPairs(std::stringstream& stream);
		void	sortVecPairs();
		void	sortDeqPairs();
		void	sortVecMainChain();
		void	sortDeqMainChain();
		void	vecBinarySearch(int number);
		void	deqBinarySearch(int number);
		void	insertVec();
		void	insertDeq();
	
		std::vector<int>	buildVecJacobSequence();
		std::deque<int>		buildDeqJacobSequence();

		//! Helpers
		void	printVec(int id);
		void	printDeq(int id);
		void	checkIfVecSorted();
		void	checkIfDeqSorted();
		void	displayTime(double vecTime, double decTime);
		void	displayUnsortedSequence(int argc, char **argv);
		void	displaySortedSequence();
};

#endif
