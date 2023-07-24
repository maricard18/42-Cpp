/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:36:31 by maricard          #+#    #+#             */
/*   Updated: 2023/07/24 11:10:45 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point a(1.0f, 1.0f);
	Point b(2.0f, 2.0f);
	Point c(2.0f, 1.0f);
	Point point(2.0f, 2.0f);
	
	if (bsp(a, b, c, point) == true)
		std::cout << "Point is inside of the triangle :)" << std::endl;
	else
		std::cout << "Point is not inside of the triangle :(" << std::endl;	
	return 0;
}
