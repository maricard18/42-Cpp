/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:47:09 by maricard          #+#    #+#             */
/*   Updated: 2023/07/07 15:36:54 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string new_name)
{
	name = new_name;
}

void Zombie::announce(void)
{
	std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
