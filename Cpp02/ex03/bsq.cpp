/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:04:20 by maricard          #+#    #+#             */
/*   Updated: 2023/07/25 11:32:32 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{	
	std::cout << "a: " << a.getX() << " " << a.getY() << std::endl;
	std::cout << "b: " << b.getX() << " " << b.getY() << std::endl;
	std::cout << "c: " << c.getX() << " " << c.getY() << std::endl;
	std::cout << "point: " << point.getX() << " " << point.getY() << std::endl;
	
	a.setArea(a, b, c);
	std::cout << "a.getArea(): " << a.getArea() << std::endl;
	
}
