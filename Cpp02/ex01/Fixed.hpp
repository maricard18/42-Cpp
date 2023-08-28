/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:47:52 by maricard          #+#    #+#             */
/*   Updated: 2023/08/28 14:47:42 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <iomanip>

class Fixed
{
	private:
		int value;
		static const int bits = 8;

	public:
		//! Constructors and destructor
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int number);
		Fixed(const float number);
		~Fixed();

		//! Operator overloading
		Fixed& operator=(const Fixed& other);
		
		//! Member functions
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &c);

#endif
