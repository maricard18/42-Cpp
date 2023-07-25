/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:26:50 by maricard          #+#    #+#             */
/*   Updated: 2023/07/25 13:02:36 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float a, const float b) : x(a), y(b)
{
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
