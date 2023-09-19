/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:39:25 by maricard          #+#    #+#             */
/*   Updated: 2023/09/19 19:58:23 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"

template <typename T>
void 	swap(T &x, T &y)
{
    T temp;

	temp = x;
	x = y;
	y = temp;
}

template <typename T> 
T	min(T x, T y)
{
	if (x < y)
		return x;
	else
		return y;
}

template <typename T> 
T	max(T x, T y)
{
	if (x > y)
		return x;
	else
		return y;
}

#endif
