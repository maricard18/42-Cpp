/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:03:41 by maricard          #+#    #+#             */
/*   Updated: 2023/09/18 19:38:09 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _input("")
{
}

ScalarConverter::ScalarConverter(std::string input) : _input(input)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	this->_input = copy._input;
	*this = copy;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

int 	ScalarConverter::mainChecker()
{
	int ch = 0;
	int nb = 0;
	int dot = 0;
	int f = 0;
	int signal = 0;

	if (this->checkFunStuff() != 0)
		return VALID_INPUT;

	for (int i = 0; this->_input[i]; i++)
	{
		if (this->_input[i] >= '0' && this->_input[i] <= '9')
			nb++;
		else if (this->_input[i] == '-' || this->_input[i] == '+')
			signal++;
		else if (this->_input[i] == '.')
			dot++;
		else if (this->_input[i] == 'f')
			f++;
		else if (this->_input[i] < '0' || this->_input[i] > '9')
			ch++;
	}

	if ((ch > 0 && nb > 0) || ch > 1 || f > 1 || dot > 1 || signal > 1)
		return INVALID_INPUT;
	else
		return VALID_INPUT;
}	

int		ScalarConverter::checkChar()
{
	if (this->checkFunStuff() != 0)
		return IMPOSSIBLE;
	else if (isdigit(this->_input[0]))
	{
		if (atoi(this->_input.c_str()) < 32)
			return NOT_DISPLAYABLE;
		else if (atoi(this->_input.c_str()) > 126)
			return OVERFLOW;		
	}
	else if (this->_input[0] == '-' && isdigit(this->_input[1]))
		return NOT_DISPLAYABLE;
	else if (isalpha(this->_input[0]))
		return ISCHAR; 

	return 0;
}

int 	ScalarConverter::checkInt()
{
	long number = static_cast<long>(atol(this->_input.c_str()));

	if (this->checkFunStuff() != 0)
		return IMPOSSIBLE;
	else if (this->_input[0] == '-' && isdigit(this->_input[1]))
		return 0;
	else if (isprint(this->_input[0]) && !isdigit(this->_input[0]))
		return ISCHAR;
	else if (std::numeric_limits<int>::max() < number || std::numeric_limits<int>::min() > number)
		return OVERFLOW;

	return 0;
}

int		ScalarConverter::checkFloat()
{
	if (this->checkFunStuff() == NANF || this->checkFunStuff() == NANF)
		return NANF;
	else if (this->checkFunStuff() == INF_N || this->checkFunStuff() == INFF_N)
		return INFF_N;
	else if (this->checkFunStuff() == INF_P || this->checkFunStuff() == INFF_P)
		return INFF_P;
	else if (this->_input[0] == '-' && isdigit(this->_input[1]))
		return 0;
	else if (isprint(this->_input[0]) && !isdigit(this->_input[0]))
		return ISCHAR;

	return 0;
}

int		ScalarConverter::checkDouble()
{
	if (this->checkFunStuff() == NANF || this->checkFunStuff() == NANF)
		return NAN;
	else if (this->checkFunStuff() == INF_N || this->checkFunStuff() == INFF_N)
		return INF_N;
	else if (this->checkFunStuff() == INF_P || this->checkFunStuff() == INFF_P)
		return INF_P;
	else if (this->_input[0] == '-' && isdigit(this->_input[1]))
		return 0;
	else if (isprint(this->_input[0]) && !isdigit(this->_input[0]))
		return ISCHAR;

	return 0;
}

void	ScalarConverter::convert()
{
	if (this->mainChecker() == INVALID_INPUT)
		throw std::invalid_argument("Invalid input");
	
	this->convertChar();
	this->convertInt();
	this->convertFloat();
	this->convertDouble();
}

void	ScalarConverter::convertChar()
{
	int type = this->checkChar();
	
	if (type == NOT_DISPLAYABLE)
		std::cout << "char: Non displayable" << std::endl;
	else if (type == IMPOSSIBLE)
		std::cout << "char: impossible" << std::endl;
	else if (type == OVERFLOW)
		std::cout << "char: overflow" << std::endl;
	else if (type == ISCHAR)
		std::cout << "char: \"" 
				  << static_cast<char>(this->_input[0]) 
				  << "\"" 
				  << std::endl;
	else
		std::cout << "char: \"" 
				  << static_cast<char>(atoi(this->_input.c_str())) 
				  << "\""
				  << std::endl;
}

void	ScalarConverter::convertInt()
{
	int type = this->checkInt();
	
	if (type == OVERFLOW)
		std::cout << "int: overflow" << std::endl;
	else if (type == IMPOSSIBLE)
		std::cout << "int: impossible" << std::endl;
	else if (type == ISCHAR)
		std::cout << "int: " 
				  << static_cast<int>(this->_input[0]) 
				  << std::endl;
	else
		std::cout << "int: " 
				  << static_cast<int>(atoi(this->_input.c_str())) 
				  << std::endl;
}

void	ScalarConverter::convertFloat()
{
	int type = this->checkFloat();
	
	if (type == NANF)
		std::cout << "float: nanf" << std::endl;
	else if (type == INFF_N)
		std::cout << "float: -inff" << std::endl;
	else if (type == INFF_P)
		std::cout << "float: +inff" << std::endl;
	else if (type == ISCHAR)
		std::cout << "float: " 
				  << static_cast<float>(this->_input[0])
				  << "f"
				  << std::endl;
	else
		std::cout << "float: " 
				  << static_cast<float>(atof(this->_input.c_str())) 
				  << "f" 
				  << std::endl;
}

void	ScalarConverter::convertDouble()
{
	int type = this->checkDouble();

	if (type == NAN)
		std::cout << "double: nan" << std::endl;
	else if (type == INF_N)
		std::cout << "double: -inf" << std::endl;
	else if (type == INF_P)
		std::cout << "double: +inf" << std::endl;
	else if (type == ISCHAR)
		std::cout << "double: " 
				  << static_cast<double>(this->_input[0])
				  << std::endl;
	else
		std::cout << "double: " 
				  << static_cast<double>(atof(this->_input.c_str())) 
				  << std::endl;
}

int		ScalarConverter::checkFunStuff()
{
	if (!strcmp(this->_input.c_str(), "nan"))
		return NAN;
	else if (!strcmp(this->_input.c_str(), "nanf"))
		return NANF;
	else if (!strcmp(this->_input.c_str(), "-inf"))
		return INF_N;
	else if (!strcmp(this->_input.c_str(), "+inf"))
		return INF_P;
	else if (!strcmp(this->_input.c_str(), "-inff"))
		return INFF_N;
	else if (!strcmp(this->_input.c_str(), "+inff"))
		return INFF_P;
	else
		return 0;
}
