/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:28:05 by maricard          #+#    #+#             */
/*   Updated: 2023/07/10 15:13:55 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid arguments" << std::endl
				  << "./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
		return (0);
	}
	else
	{
		std::string level = argv[1];
		Harl harl;

		harl.complain(level);
		return (0);
	}
}
