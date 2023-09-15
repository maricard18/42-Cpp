/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:20:51 by maricard          #+#    #+#             */
/*   Updated: 2023/09/14 22:25:49 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class ScalarConverter
{
	private:
		std::string		_input;

	public:
		//! Constructors and destructor
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		~ScalarConverter();

		//! Operator overloading
		ScalarConverter& operator=(const ScalarConverter& other);

		//! Functions

};

#endif
