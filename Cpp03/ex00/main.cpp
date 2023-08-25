/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:00:33 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 09:41:11 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	ClapTrap("Jonny");

	ClapTrap.attack("Jack");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(5);
}
