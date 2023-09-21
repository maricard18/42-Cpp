/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:43:59 by maricard          #+#    #+#             */
/*   Updated: 2023/09/21 17:54:51 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <cmath>
# include <vector>

# define RED 	"\033[1;31m"
# define GREEN 	"\033[1;32m"
# define YELLOW "\033[1;33m"
# define WHITE 	"\033[1;37m"
# define RESET 	"\033[0m"\

class Span
{
	private:
		unsigned int	_N;
		std::vector<int>	_vec;

	public:
		//! Constructors and destructor
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		~Span();

		//! Operator overloading
		Span& operator=(const Span& other);

		//! Functions
		void	addNumber(int x);
		void	addManyNumbers(int lowerNb, int higherNb);
		int		shortestSpan();
		int		longestSpan();

		//! Helper
		void	printVec();
};

#endif
