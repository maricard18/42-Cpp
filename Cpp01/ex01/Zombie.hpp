/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:46:56 by maricard          #+#    #+#             */
/*   Updated: 2023/07/07 15:36:50 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{	
	public:

		void 	announce(void);
		void	set_name(std::string name);
	
	private:
	
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
