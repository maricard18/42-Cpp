/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:23:47 by maricard          #+#    #+#             */
/*   Updated: 2023/07/03 11:25:47 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void add_contact(Contact &contact, PhoneBook &phonebook, int *i, int *temp)
{
	(*i)++;
	if (*i > 7)
	{
		contact.set_values(phonebook, *temp);
		(*temp)++;
		if (*temp > 7)
		{
			*temp = 0;
		}
		*i = 8;
	}
	else
	{
		contact.set_values(phonebook, *i);
	}
}

void search_contacts(PhoneBook &phonebook, int i)
{
	int a = 0;

	if (i == -1)
	{
		std::cout << std::endl
				  << "No contacts yet" << std::endl
				  << std::endl;
		return;
	}
	else
	{
		std::cout << std::endl
				  << "------------------------------------------" << std::endl
				  << "| index |first name| last name|  nickname|" << std::endl;
		while (a <= i && a < 8)
		{
			phonebook.get_contact(a);
			a++;
		}
	}
	std::cout << std::endl;
	std::cout << "Enter index: ";
	std::cin >> a;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	std::cout << std::endl;
	if (a - 1 > i || a - 1 < 0)
		std::cout << "Index doesn't exit" << std::endl
				  << std::endl;
	else
		phonebook.get_contact_info(a - 1);
}

int main(void)
{
	Contact contact;
	PhoneBook phonebook;
	std::string str;
	int i = -1;
	int temp = 0;

	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >> str;

		if (str.compare("ADD") == 0)
			add_contact(contact, phonebook, &i, &temp);
		else if (str.compare("SEARCH") == 0)
			search_contacts(phonebook, i);
		else if (str.compare("EXIT") == 0)
			break;
		else
		{
			std::cout << std::endl
					  << "Command: " << str << " doesn't exit"
					  << std::endl << std::endl;
		}
	}
}
