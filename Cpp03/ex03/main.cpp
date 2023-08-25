/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:00:33 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 11:08:18 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	DiamondTrap("Jonny");

	if (DiamondTrap.getHitPoints() > 0 && DiamondTrap.getEnergyPoints() > 0)
		DiamondTrap.attack("Jack");
	DiamondTrap.takeDamage(5);
	if (DiamondTrap.getEnergyPoints() > 0)
		DiamondTrap.beRepaired(5);
	DiamondTrap.whoAmI();
}
