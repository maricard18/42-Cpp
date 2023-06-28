/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:23:47 by maricard          #+#    #+#             */
/*   Updated: 2023/06/28 20:26:08 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

void add_contact(Contact contact, PhoneBook phonebook, int *i)
{
	*i++;
	if (*i > 7)
	{
		// change the oldest contact
		phonebook.create_contact(i);
		contact.set_values();
		
	}
	else
	{
		// add contact numeber *i
		phonebook.create_contact(i);
		contact.set_values();
	}
}
void search_contacts(Contact contact, PhoneBook phonebook, int *i)
{
	int a = 0;
	
	while (a < *i)
	{
		phonebook.contact_list(a);
		
		std::cout << a << "         "<< "|";
		std::cout << contact.get_value("first_name") << "|";
		std::cout << contact.get_value("last_name") << "|";
		std::cout << contact.get_value("nickname") << std::endl;
		a++;
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
			search_contacts(contact, phonebook, &i);
		else if (str.compare("EXIT") == 0)
			break;
		else
			std::cout << "Wrong command :(" << std::endl;
	}
}