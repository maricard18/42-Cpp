/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:00:33 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 09:44:46 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	FragTrap("Jonny");

	FragTrap.attack("Jack");
	FragTrap.takeDamage(5);
	FragTrap.beRepaired(5);
	FragTrap.highFivesGuys();
}
