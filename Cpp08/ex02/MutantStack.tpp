/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:05:53 by maricard          #+#    #+#             */
/*   Updated: 2023/09/22 11:11:39 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "MutantStack default constructor called" << std::endl;
}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy) : std::stack<T>(copy)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
	*this = copy;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack destructor called" << std::endl;
}

MutantStack& MutantStack::operator=(const MutantStack& other)
{
	std::cout << "MutantStack operator overload constructor called" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

