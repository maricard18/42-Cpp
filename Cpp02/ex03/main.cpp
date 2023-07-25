/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:36:31 by maricard          #+#    #+#             */
/*   Updated: 2023/07/25 13:52:59 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	if (bsp(Point(1.0f, 1.0f), 	Point(2.0f, 2.0f), Point(2.0f, 1.0f), Point(1.5f, 1.5f)) == true)
		std::cout << "Point is inside of the triangle :)" << std::endl;
	else
		std::cout << "Point is not inside of the triangle :(" << std::endl;	
	return 0;
}
