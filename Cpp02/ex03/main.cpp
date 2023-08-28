/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:36:31 by maricard          #+#    #+#             */
/*   Updated: 2023/08/28 14:46:17 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	if (bsp(Point(0, 0), Point(3.0, 0), Point(-1, 4), Point(1, 0.1)) == true)
		std::cout << "Point is inside of the triangle :)" << std::endl;
	else
		std::cout << "Point is not inside of the triangle :(" << std::endl;	
	return 0;
}
