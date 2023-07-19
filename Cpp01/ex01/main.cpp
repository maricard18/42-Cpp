/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:46:39 by maricard          #+#    #+#             */
/*   Updated: 2023/07/07 15:47:18 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;
	std::string name = "mario";
	int N = 8;

	zombies = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete [] zombies;
}
