/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:00:33 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 14:37:37 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	DiamondTrap("Jonny");

	DiamondTrap.attack("Jack");
	DiamondTrap.takeDamage(5);
	DiamondTrap.beRepaired(5);
	DiamondTrap.whoAmI();
}
