/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:26:50 by maricard          #+#    #+#             */
/*   Updated: 2023/07/25 11:30:52 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(const float a, const float b)
{
	this->x = a;
	this->y = b;
}

Point::Point(const Point& copy)
{
	*this = copy;
}

Point::~Point()
{
}

Point& Point::operator=(const Point& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}

Fixed Point::getArea(void) const
{
	return (this->area);
}

void Point::setArea(Point const a, Point const b, Point const c) const
{
	const Fixed w;

	w = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));
	if (w < 0)
		w = w * -1;
	this->area = w * 0.5f;
}
