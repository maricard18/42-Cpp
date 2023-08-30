/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:00:33 by maricard          #+#    #+#             */
/*   Updated: 2023/08/30 09:47:45 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	DiamondTrap("Jonny");

	DiamondTrap.attack("Jack"); // ScavTrap member function
	DiamondTrap.takeDamage(5);
	DiamondTrap.beRepaired(5);
	DiamondTrap.guardGate(); // ScavTrap member function
	DiamondTrap.highFivesGuys(); // FragTrap member function
	DiamondTrap.whoAmI();
}
