/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:04:20 by maricard          #+#    #+#             */
/*   Updated: 2023/07/25 13:05:01 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed setArea(Point const a, Point const b, Point const c)
{
	Fixed w;

	w = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));
	if (w < 0)
		w = w * -1;
	w = w * 0.5f;
	std::cout << "w = " << w << std::endl;
	return (w);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed mainArea;
	Fixed area1;
	Fixed area2;
	Fixed area3;
	
	(void)point;
	mainArea = setArea(a, b, c);
	std::cout << "area = " << mainArea << std::endl;
	return true;
}
