/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:26:50 by maricard          #+#    #+#             */
/*   Updated: 2023/07/22 18:11:06 by maricard         ###   ########.fr       */
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

