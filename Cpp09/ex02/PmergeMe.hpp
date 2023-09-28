/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:23:11 by maricard          #+#    #+#             */
/*   Updated: 2023/09/28 16:17:26 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <deque>

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
		std::deque<int>		_mainDeq;
		std::deque<int>		_pendDeq;

	public:
		//! Constructors and destructor
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		~PmergeMe();

		//! Operator overloading
		PmergeMe& operator=(const PmergeMe& other);

		//! Functions
		bool	validateArguments(int argc, char **argv, std::stringstream& stream);
		void	createPairs(std::stringstream& stream);
		void	sortPairs();

		//! Helpers
		void	printVec(int id);
		void	printDeque(int id);

};

#endif
