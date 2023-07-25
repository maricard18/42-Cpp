/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:21:59 by maricard          #+#    #+#             */
/*   Updated: 2023/07/25 11:26:32 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
		const Fixed area;

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
		Fixed getArea(void) const;

		void setArea(Point const a, Point const b, Point const c) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
