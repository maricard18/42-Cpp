/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:23:40 by maricard          #+#    #+#             */
/*   Updated: 2023/09/21 11:36:16 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define WHITE "\033[1;37m"
# define RESET "\033[0m"\

template <typename T>
void	easyfind(T* container, int value)
{
	for (int i = 0; container[i]; i++)
	{
		if (containner[i] == value)
			std::cout << WHITE 
					  << "Ocurrence \'"
					  << GREEN
					  << value
					  << WHITE
					  << "\' was found"
					  << std::endl;
		return ;
	}
	
	throw std::invalid_argument("Ocurrence not found");
}

#endif
