/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:23:40 by maricard          #+#    #+#             */
/*   Updated: 2023/09/21 12:39:29 by maricard         ###   ########.fr       */
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
	typename T::const_iterator iter;
	
	iter = find(container.begin(), container.end(), value);
	
	if (iter != container.end())
	{
		std::cout << WHITE 
				  << "Ocurrence was found"
				  << RESET
				  << std::endl;
		return ;
	}
	else
		throw std::invalid_argument("ocurrence not found");
}

#endif
