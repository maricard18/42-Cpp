/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:47:46 by maricard          #+#    #+#             */
/*   Updated: 2023/07/07 15:24:39 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string.h>

void randomChump(std::string name)
{
	Zombie newZombie;

	newZombie.set_name(name);
	newZombie.announce();
}
