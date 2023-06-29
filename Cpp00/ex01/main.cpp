/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:23:47 by maricard          #+#    #+#             */
/*   Updated: 2023/06/29 12:32:00 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

void add_contact(Contact &contact, PhoneBook &phonebook, int *i)
{
	(*i)++;
	if (*i > 7)
	{
		// change the oldest contact
		contact.set_values(phonebook, *i);
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
	
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (a <= i && a < 8)
	{
		phonebook.get_contact(a);
		a++;
	}
	std::cout << "Enter index: ";
	std::cin >> a;
	if (a > i || a < 0)
		std::cout << "Wrong index :(" << std::endl;
	else
	{
		phonebook.get_contact_info(a);
	}
}

int main(void)
{
	Contact contact;
	PhoneBook phonebook;
	std::string str;
	int i;

	i = -1;
	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >> str;

		if (str.compare("ADD") == 0)
			add_contact(contact, phonebook, &i);
		else if (str.compare("SEARCH") == 0)
			search_contacts(phonebook, i);
		else if (str.compare("EXIT") == 0)
			break;
		else
			std::cout << "Wrong command :(" << std::endl;
	}
}
