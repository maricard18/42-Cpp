/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:47:52 by maricard          #+#    #+#             */
/*   Updated: 2023/07/19 17:38:32 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>

class Fixed
{
	private:
		int value;
		static const int bits = 8;

	public:

		int getRawBits(void) const;
		void setRawBits(int const raw);
	
		//! Constructors and destructor
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();

		//! Operator overloading
		Fixed& operator=(const Fixed& other);
};

#endif
