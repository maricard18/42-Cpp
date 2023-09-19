/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:03:41 by maricard          #+#    #+#             */
/*   Updated: 2023/09/19 18:55:07 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
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

int 	ScalarConverter::mainChecker(std::string input)
{
	int ch = 0;
	int nb = 0;
	int dot = 0;
	int f = 0;
	int signal = 0;

	if (ScalarConverter::checkFunStuff(input) != 0)
		return VALID_INPUT;

	for (int i = 0; input[i]; i++)
	{
		if (input[i] >= '0' && input[i] <= '9')
			nb++;
		else if (input[i] == '-' || input[i] == '+')
			signal++;
		else if (input[i] == '.')
			dot++;
		else if (input[i] == 'f')
			f++;
		else if (input[i] < '0' || input[i] > '9')
			ch++;
	}

	if ((ch > 0 && nb > 0) || ch > 1 || f > 1 || dot > 1 || signal > 1)
		return INVALID_INPUT;
	else
	{
		if (f)
			return FLOAT;
		else if (dot)
			return DOUBLE;
		else if (nb)
			return INT;
		else 
			return CHAR;
	}
}

void	ScalarConverter::checkType(std::string input)
{
	if (ScalarConverter::mainChecker(input) == INVALID_INPUT)
		throw std::invalid_argument("Invalid input");
	else if (ScalarConverter::mainChecker(input) == CHAR)
		ScalarConverter::convert(input);
	else if (ScalarConverter::mainChecker(input) == INT)
		ScalarConverter::convert(input);
	else if (ScalarConverter::mainChecker(input) == FLOAT)
		ScalarConverter::convert(input);
	else if (ScalarConverter::mainChecker(input) == DOUBLE)
		ScalarConverter::convert(input);
}

void	ScalarConverter::convert(std::string input)
{
	ScalarConverter::convertChar(input);
	ScalarConverter::convertInt(input);
	ScalarConverter::convertFloat(input);
	ScalarConverter::convertDouble(input);
}

void	ScalarConverter::convertChar(std::string input)
{
	int type = ScalarConverter::checkChar(input);
	
	if (type == NOT_DISPLAYABLE)
		std::cout << "char: Non displayable" << std::endl;
	else if (type == IMPOSSIBLE)
		std::cout << "char: impossible" << std::endl;
	else if (type == OVERFLOW)
		std::cout << "char: overflow" << std::endl;
	else if (type == ISCHAR)
		std::cout << "char: \'"
				  << static_cast<char>(input[0])
				  << "\'"
				  << std::endl;
	else
		std::cout << "char: \'"
				  << static_cast<char>(atoi(input.c_str()))
				  << "\'"
				  << std::endl;
}

void	ScalarConverter::convertInt(std::string input)
{
	int type = ScalarConverter::checkInt(input);
	
	if (type == OVERFLOW)
		std::cout << "int: overflow" << std::endl;
	else if (type == IMPOSSIBLE)
		std::cout << "int: impossible" << std::endl;
	else if (type == ISCHAR)
		std::cout << "int: " 
				  << static_cast<int>(input[0]) 
				  << std::endl;
	else
		std::cout << "int: " 
				  << static_cast<int>(atoi(input.c_str())) 
				  << std::endl;
}

void	ScalarConverter::convertFloat(std::string input)
{
	int type = ScalarConverter::checkFloat(input);
	
	if (type == NANF)
		std::cout << "float: nanf" << std::endl;
	else if (type == INFF_N)
		std::cout << "float: -inff" << std::endl;
	else if (type == INFF_P)
		std::cout << "float: +inff" << std::endl;
	else if (type == ISCHAR)
		std::cout << "float: " 
				  << static_cast<float>(input[0])
				  << "f"
				  << std::endl;
	else
		std::cout << "float: " 
				  << static_cast<float>(atof(input.c_str())) 
				  << "f" 
				  << std::endl;
}

void	ScalarConverter::convertDouble(std::string input)
{
	int type = ScalarConverter::checkDouble(input);

	if (type == NAN)
		std::cout << "double: nan" << std::endl;
	else if (type == INF_N)
		std::cout << "double: -inf" << std::endl;
	else if (type == INF_P)
		std::cout << "double: +inf" << std::endl;
	else if (type == ISCHAR)
		std::cout << "double: " 
				  << static_cast<double>(input[0])
				  << std::endl;
	else
		std::cout << "double: " 
				  << static_cast<double>(atof(input.c_str())) 
				  << std::endl;
}

int		ScalarConverter::checkChar(std::string input)
{
	if (ScalarConverter::checkFunStuff(input) != 0)
		return IMPOSSIBLE;
	else if (input[0] == '-' && isdigit(input[1]))
		return NOT_DISPLAYABLE;
	else if (isdigit(input[0]))
	{
		if (atoi(input.c_str()) < 32)
			return NOT_DISPLAYABLE;
		else if (atoi(input.c_str()) > 126)
			return OVERFLOW;	
	}
	else if (isprint(input[0]))
		return ISCHAR;

	return 0;
}

int 	ScalarConverter::checkInt(std::string input)
{
	long number = static_cast<long>(atol(input.c_str()));

	if (ScalarConverter::checkFunStuff(input) != 0)
		return IMPOSSIBLE;
	else if (std::numeric_limits<int>::max() < number || std::numeric_limits<int>::min() > number)
		return OVERFLOW;
	else if (input[0] == '-' && isdigit(input[1]))
		return 0;
	else if (isprint(input[0]) && !isdigit(input[0]))
		return ISCHAR;

	return 0;
}

int		ScalarConverter::checkFloat(std::string input)
{
	if (ScalarConverter::checkFunStuff(input) == NAN || ScalarConverter::checkFunStuff(input) == NANF)
		return NANF;
	else if (ScalarConverter::checkFunStuff(input) == INF_N || ScalarConverter::checkFunStuff(input) == INFF_N)
		return INFF_N;
	else if (ScalarConverter::checkFunStuff(input) == INF_P || ScalarConverter::checkFunStuff(input) == INFF_P)
		return INFF_P;
	else if (input[0] == '-' && isdigit(input[1]))
		return 0;
	else if (isprint(input[0]) && !isdigit(input[0]))
		return ISCHAR;

	return 0;
}

int		ScalarConverter::checkDouble(std::string input)
{
	if (ScalarConverter::checkFunStuff(input) == NAN || ScalarConverter::checkFunStuff(input) == NANF)
		return NAN;
	else if (ScalarConverter::checkFunStuff(input) == INF_N || ScalarConverter::checkFunStuff(input) == INFF_N)
		return INF_N;
	else if (ScalarConverter::checkFunStuff(input) == INF_P || ScalarConverter::checkFunStuff(input) == INFF_P)
		return INF_P;
	else if (input[0] == '-' && isdigit(input[1]))
		return 0;
	else if (isprint(input[0]) && !isdigit(input[0]))
		return ISCHAR;

	return 0;
}

int		ScalarConverter::checkFunStuff(std::string input)
{
	if (!strcmp(input.c_str(), "nan"))
		return NAN;
	else if (!strcmp(input.c_str(), "nanf"))
		return NANF;
	else if (!strcmp(input.c_str(), "-inf"))
		return INF_N;
	else if (!strcmp(input.c_str(), "+inf"))
		return INF_P;
	else if (!strcmp(input.c_str(), "-inff"))
		return INFF_N;
	else if (!strcmp(input.c_str(), "+inff"))
		return INFF_P;
	else
		return 0;
}
