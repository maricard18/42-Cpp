/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:54:23 by maricard          #+#    #+#             */
/*   Updated: 2023/09/11 19:05:06 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat student("Mario", 1);
	Bureaucrat teacher("Luigi", 150);

	std::cout << student << std::endl;
	std::cout << teacher << std::endl;
}
