/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:47:09 by maricard          #+#    #+#             */
/*   Updated: 2023/07/07 15:19:08 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string new_name)
{
	name = new_name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
