/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:06:12 by maricard          #+#    #+#             */
/*   Updated: 2023/09/19 20:23:01 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

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

template <typename T, typename F>
void	iter(T& array, size_t len, U function)
{
	
}

#endif
