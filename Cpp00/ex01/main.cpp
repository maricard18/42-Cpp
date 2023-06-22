/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:23:47 by maricard          #+#    #+#             */
/*   Updated: 2023/06/22 20:18:27 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void add_contact(void)
{
	Contact contact;
	
	contact.set_values();
}
void search_contact(void)
{
	Contact contact;
	//int index;
	int a = 0;
	
	std::cout << "   index  |first name|last name | nickname " << std::endl;
	std::cout << "         " << a << "|";
	std::cout << contact.get_value("first_name") << "|";
	std::cout << contact.get_value("last_name") << "|";
	std::cout << contact.get_value("nickname") << std::endl;
	//std::cout << "Enter index: ";
	//std::cin >> index;
	//std::cout << std::endl;
}

int main(void)
{
	std::string str;

	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >> str;

		if (str.compare("ADD") == 0)
			add_contact();
		else if (str.compare("SEARCH") == 0)
			search_contact();
		else if (str.compare("EXIT") == 0)
			break;
		else
			std::cout << "Wrong command :(" << std::endl;
	}
}