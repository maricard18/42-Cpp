/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:57:56 by maricard          #+#    #+#             */
/*   Updated: 2023/09/22 11:14:00 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack
{
	public:
		//! Constructors and destructor
		MutantStack();
		MutantStack(const MutantStack& copy);
		virtual ~MutantStack();

		//! Operator overloading
		MutantStack& operator=(const MutantStack& other);

		//! Functions
		T&	begin();
		T&	end();
};

#endif
