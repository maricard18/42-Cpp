/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:20:51 by maricard          #+#    #+#             */
/*   Updated: 2023/09/19 15:00:37 by maricard         ###   ########.fr       */
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
		//! Constructors and destructor
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		~ScalarConverter();

		//! Operator overloading
		ScalarConverter& operator=(const ScalarConverter& other);

	public:
		//! Functions
		static void		convert(std::string input);
		static void		checkType(std::string input);
		static int		mainChecker(std::string input);
		
		//!  Chekers
		static int		checkChar(std::string input);
		static int		checkInt(std::string input);
		static int		checkFloat(std::string input);
		static int		checkDouble(std::string input);
		static int 		checkFunStuff(std::string input);

		//! Converter
		static void		convertChar(std::string input);
		static void		convertInt(std::string input);
		static void		convertFloat(std::string input);
		static void		convertDouble(std::string input);
};

#endif
