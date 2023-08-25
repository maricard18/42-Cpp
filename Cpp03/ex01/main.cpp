/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:00:33 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 09:42:45 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	ScavTrap("Jonny");

	ScavTrap.attack("Jack");
	ScavTrap.takeDamage(5);
	ScavTrap.beRepaired(5);
	ScavTrap.guardGate();
}
