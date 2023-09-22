/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:15:51 by maricard          #+#    #+#             */
/*   Updated: 2023/09/22 17:21:11 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

template <typename T, typename C>
MutantStack<T, C>::MutantStack()
{
}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(const MutantStack& copy)
{
	*this = copy;
}

template <typename T, typename C>
MutantStack<T, C>::~MutantStack()
{
}

template <typename T, typename C>
MutantStack<T, C>& MutantStack<T, C>::operator=(const MutantStack& other)
{
	if (*this == other)
		return *this;
	std::stack<T>::operator=(other);
	return *this;
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator	MutantStack<T, C>::begin()
{
	return this->c.begin();
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator	MutantStack<T, C>::end()
{
	return this->c.end();
}

template <typename T, typename C>
void	MutantStack<T, C>::print()
{
	iterator	it = this->begin();
	iterator	ite = this->end();

	std::cout << RED << "stack: " << WHITE;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << RESET << std::endl;
}
