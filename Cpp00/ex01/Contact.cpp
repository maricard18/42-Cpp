/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:36:47 by maricard          #+#    #+#             */
/*   Updated: 2023/06/22 20:26:34 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	store_values(std::string str, char *arr)
{
	std::size_t k;

	if (str.length() == 0)
	
	if (str.length() > 10)
	{
		for (std::size_t i = 0; i < str.length(); i++)
			arr[i] = str[i];
		arr[9] = '.';
	}
	else
	{
		k = str.length();
		for (std::size_t i = 0; i < k; i++)
			arr[i] = str[i];
		for (std::size_t i = k; i < 10; i++)
			arr[i] = ' ';
	}
	std::cout << std::endl;
}

void Contact::set_values(void)
{
	std::string str;

	while (1)
	{
		std::cout << "Enter first name: ";
		std::cin >> str;
		store_values(str, first_name);

		std::cout << "Enter last name: ";
		std::cin >> str;
		store_values(str, last_name);

		std::cout << "Enter nickname: ";
		std::cin >> str;
		store_values(str, nickname);

		std::cout << "Enter number: ";
		std::cin >> str;
		store_values(str, number);

		std::cout << "Enter darkest secret: ";
		std::cin >> str;
		store_values(str, secret);
}

std::string Contact::get_value(std::string str)
{
	if (str.compare("first_name") == 0)
		return (first_name);
	else if (str.compare("last_name") == 0)
		return (last_name);
	else if (str.compare("nickname") == 0)
		return (nickname);
	return (NULL);
}
