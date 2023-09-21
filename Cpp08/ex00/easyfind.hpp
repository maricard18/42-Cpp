/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:23:40 by maricard          #+#    #+#             */
/*   Updated: 2023/09/21 12:19:04 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

# define RED 	"\033[1;31m"
# define GREEN 	"\033[1;32m"
# define YELLOW "\033[1;33m"
# define WHITE 	"\033[1;37m"
# define RESET 	"\033[0m"\

template <typename T>
void	easyfind(const T& container, int value)
{
	for (int i = 0; container[i]; i++)
	{
		if (container[i] == value)
		{
			std::cout << WHITE 
					  << "Ocurrence was found"
					  << RESET
					  << std::endl;
			return ;
		}
	}
	
	throw std::invalid_argument("ocurrence not found");
}

#endif
