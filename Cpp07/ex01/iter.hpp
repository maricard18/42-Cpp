/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:06:12 by maricard          #+#    #+#             */
/*   Updated: 2023/09/20 19:18:18 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"

template <typename T>
void 	print(T x)
{
	std::cout << GREEN << x << " ";
}

template <typename T>
void	iter(T* array, size_t len, void (*func)(T&))
{
	size_t	i = -1;

	while (++i < len)
		func(array[i]);
	std::cout << RESET << std::endl;
}

#endif
