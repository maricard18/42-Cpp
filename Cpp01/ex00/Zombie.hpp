/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:46:56 by maricard          #+#    #+#             */
/*   Updated: 2023/07/11 14:28:45 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{	
	public:
		Zombie(void);
		~Zombie(void);

		void 	announce(void);
		void	set_name(std::string name);
	
	private:
		std::string name;
};

void 	randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
