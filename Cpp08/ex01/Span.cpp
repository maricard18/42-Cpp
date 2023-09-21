/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:48:28 by maricard          #+#    #+#             */
/*   Updated: 2023/09/21 13:00:34 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _array(NULL), _N(0)
{
}

Span::Span(unsigned int N) : _array(new int[N]), _N(N)
{
	for (unsigned int i = 0; i < _N; i++)
		this->_array[i] = NULL;
}

Span::Span(const Span& copy) : _array(new int[copy._N]), _N(copy._N)
{
	//! copy algorithm ?!
	for (int i = 0; i < _N; i++)
		_array[i] = copy._array[i];
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
	if (_array)
		delete [] _array;
}

Span& Span::operator=(const Span& other)
{
	std::cout << "Span operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	
	if (_array)
		delete [] _array;
		
	_N = other._N;
	_array = new int[other._N];
	
	for (int i = 0; i < _N; i++)
		_array[i] = other._array[i];
	
	return (*this);
}
