/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:37:34 by maricard          #+#    #+#             */
/*   Updated: 2023/09/27 17:40:08 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <sstream>
# include <stdlib.h>

# define RED 	"\033[1;31m"
# define GREEN 	"\033[1;32m"
# define YELLOW "\033[1;33m"
# define WHITE 	"\033[1;37m"
# define RESET 	"\033[0m"\

# define ADD '+'
# define SUB '-'
# define MULT '*'
# define DIV '/'

class RPN
{
	private:
		std::stack<int>		_stack;

	public:
		//! Constructors and destructor
		RPN();
		RPN(const RPN& copy);
		~RPN();

		//! Operator overloading
		RPN& operator=(const RPN& other);

		//! Functions
		void	solveExpression(std::string str);
		void	doMath(char c);
		bool	checkIfValid(std::string str);
		bool	isOperator(char c);
};

#endif
