/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:45:45 by maricard          #+#    #+#             */
/*   Updated: 2023/10/03 19:17:23 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN& copy)
{
	*this = copy;
}

RPN::~RPN()
{
}

RPN& RPN::operator=(const RPN& other)
{
	if (this == &other)
		return (*this);
	_stack = other._stack;
	return (*this);
}

void	RPN::solveExpression(std::string str)
{
	int i = 0;
	
	for (; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		else if (isdigit(str[i]))
			_stack.push(str[i] - '0');
		else if (isOperator(str[i]))
			doMath(str[i]);
	}

	if (_stack.size() != 1)
		throw std::runtime_error("numbers and operations don't match");

	std::cout << YELLOW << "Result: " WHITE << _stack.top() << std::endl;
}

void	RPN::doMath(char c)
{
	if (_stack.size() < 2)
		throw std::runtime_error("insuficient numbers/operations");

	int num2 = _stack.top();
	_stack.pop();
	int num1 = _stack.top();
	_stack.pop();

	if (c == ADD)
	{
		std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
		_stack.push(num1 + num2);
	}
	else if (c == SUB)
	{
		std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
		_stack.push(num1 - num2);
	}
	else if (c == MULT)
	{
		std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
		_stack.push(num1 * num2);
	}
	else if (c == DIV)
	{
		if (num2 == 0)
			throw std::runtime_error("division by zero not allowed");
		std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
		_stack.push(num1 / num2);
	}
}

bool	RPN::checkIfValid(std::string str)
{
	int i = 0;

	for (; str[i]; i++)
	{
		if (!isdigit(str[i]) && !isOperator(str[i]) && str[i] != ' ')
			return false;
	}

	if (isdigit(str[--i]))
		return false;

	return true;
}

bool	RPN::isOperator(char c)
{
	if (c != '+' && c != '-' && c != '*' && c != '/')
		return false;

	return true;
}
