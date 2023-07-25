/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:21:59 by maricard          #+#    #+#             */
/*   Updated: 2023/07/25 13:51:32 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		//! Constructors and destructor
		Point();
		Point(const float a, const float b);
		Point(const Point& copy);
		~Point();

		//! Operator overloading
		Point& operator=(const Point& other);

		//! Functions
		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
Fixed setArea(Point const a, Point const b, Point const c);

#endif
