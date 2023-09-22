/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:57:56 by maricard          #+#    #+#             */
/*   Updated: 2023/09/22 17:19:22 by maricard         ###   ########.fr       */
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
		MutantStack();
		MutantStack(const MutantStack& copy);
		~MutantStack();

		//! Operator overloading
		MutantStack& operator=(const MutantStack& other);

		//! Iterators
		typedef	typename	C::iterator		iterator;

		//! Functions
		iterator	begin();
		iterator	end();
		void		print();
};

#include "MutanStack.tpp"

#endif
