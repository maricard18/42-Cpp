/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:57:36 by maricard          #+#    #+#             */
/*   Updated: 2023/07/11 12:02:15 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	type = weapon;
}

std::string const &Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string weapon)
{
	type = weapon;
}
