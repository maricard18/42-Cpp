/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:20:51 by maricard          #+#    #+#             */
/*   Updated: 2023/09/18 19:19:01 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include "Macros.hpp"

# include <iostream>
# include <limits>
# include <stdlib.h>
# include <cctype>
# include <vector>
# include <string.h>

class ScalarConverter
{
	private:
		std::string		_input;

	public:
		//! Constructors and destructor
		ScalarConverter();
		ScalarConverter(std::string input);
		ScalarConverter(const ScalarConverter& copy);
		~ScalarConverter();

		//! Operator overloading
		ScalarConverter& operator=(const ScalarConverter& other);

		//!  Chekers
		int		mainChecker();
		int		checkChar();
		int		checkInt();
		int		checkFloat();
		int		checkDouble();
		int 	checkFunStuff();

		//! Converter
		void	convert();
		void	convertChar();
		void	convertInt();
		void	convertFloat();
		void	convertDouble();
};

#endif
