/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:43:59 by maricard          #+#    #+#             */
/*   Updated: 2023/09/21 12:53:28 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>

class Span
{
	private:
		int*	_array;
		unsigned int	_N;

	public:
		//! Constructors and destructor
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		~Span();

		//! Operator overloading
		Span& operator=(const Span& other);

		//! Functions
		void	addNumber();
		int		shortestSpan();
		int		longestSpan();
};

#endif
