/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:04:20 by maricard          #+#    #+#             */
/*   Updated: 2023/07/25 16:52:45 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed setArea(Point const &a, Point const &b, Point const &c)
{
	Fixed w;

	w = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));
	if (w < 0)
		w = w * -1;
	w = w * 0.5f;
	return (w);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed mainArea;
	Fixed area1;
	Fixed area2;
	Fixed area3;

	mainArea = setArea(a, b, c);
	area1 = setArea(a, b, point);
	area2 = setArea(point, b, c);
	area3 = setArea(a, point, c);
	if (area1 == 0 || area2 == 0 || area3 == 0)
		return false;
	if (mainArea == area1 + area2 + area3)
		return true;
	else
		return false;
	return true;
}
