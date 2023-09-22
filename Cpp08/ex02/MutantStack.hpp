/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:57:56 by maricard          #+#    #+#             */
/*   Updated: 2023/09/22 15:13:34 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

# define RED 	"\033[1;31m"
# define GREEN 	"\033[1;32m"
# define YELLOW "\033[1;33m"
# define WHITE 	"\033[1;37m"
# define RESET 	"\033[0m"\

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T>
{
	public:
		//! Constructors and destructor
		MutantStack() {};
		MutantStack(const MutantStack& copy){ *this = copy; };
		~MutantStack() {};

		//! Operator overloading
		MutantStack& operator=(const MutantStack& other)
		{
			if (*this == other)
				return *this;
			*this = std::stack<T>::operator=(other);
			return *this;
		}

		//! Iterators
		typedef	typename	C::iterator		iterator;

		//! Functions
		iterator	begin(){ return	this->c.begin(); };
		iterator	end(){ return this->c.end(); };
		iterator	rbegin(){ return this->c.rbegin(); };
		iterator	rend(){ return this->c.rend(); };

		void	print();
};

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

#endif
