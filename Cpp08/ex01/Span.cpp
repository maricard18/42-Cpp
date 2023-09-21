/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:48:28 by maricard          #+#    #+#             */
/*   Updated: 2023/09/21 17:48:16 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span& copy) : _N(copy._N), _vec(copy._vec)
{
}

Span::~Span()
{
}

Span& Span::operator=(const Span& other)
{
	std::cout << "Span operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);

	_vec = other._vec;
	_N = other._N;
	
	return (*this);
}

void	Span::addNumber(int x)
{
	if (_vec.size() + 1 > _N)
		throw std::out_of_range("Span can't take more numbers");
	
	_vec.push_back(x);
}

int		Span::shortestSpan()
{
	std::vector<int>	tmp_vec;
	int					res;

	tmp_vec = _vec;
	sort(tmp_vec.begin(), tmp_vec.end());
	
	if (_vec.size() < 2)
		throw std::out_of_range("Span doens't have enough numbers");

	res = tmp_vec[1] - tmp_vec[0];

	for (unsigned long i = 1; i < tmp_vec.size() - 1; i++)
	{
		if (tmp_vec[i + 1] - tmp_vec[i] < res)
			res = tmp_vec[i + 1] - tmp_vec[i];
	}
	
	return res;
}

int		Span::longestSpan()
{
	std::vector<int>::iterator	min;
	std::vector<int>::iterator	max;

	if (_vec.size() < 2)
		throw std::out_of_range("Span doesn't have enough numbers");

	min = std::min_element(_vec.begin(), _vec.end());
	max = std::max_element(_vec.begin(), _vec.end());

	return (*max - *min);
}

void	Span::printVec()
{
	std::vector<int>::iterator	iter;
	
	std::cout << RED << "Vector: " << RESET;
	for (iter = _vec.begin(); iter != _vec.end(); iter++)
		std::cout << WHITE << *iter << " " << RESET;
	std::cout << std::endl;
}
