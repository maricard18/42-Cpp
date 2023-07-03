/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:36:47 by maricard          #+#    #+#             */
/*   Updated: 2023/07/03 11:46:52 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
# include "PhoneBook.hpp"

std::string	store_values(std::string &keyword, std::string message)
{
	std::string input;
	
	std::cin.ignore(1000000000, '\n');
	while (1)
	{
		std::cout << message;
       	std::getline(std::cin, input);
		
        if (input.empty()) // ! this doesn't work // use getline ?
        {
            std::cout << "Contacts can't have empty fields." << std::endl
					  << "Try again." << std::endl;
            continue;
        }
        break;
	}
	keyword = input;
	return (keyword);
}

void Contact::set_values(PhoneBook &phonebook, int i)
{
	std::string value;
	
	value = store_values(first_name, "Enter first name: ");
	phonebook.store_contact(value, i, 0);
	value = store_values(last_name, "Enter last name: ");
	phonebook.store_contact(value, i, 1);
	value = store_values(nickname, "Enter nickname: ");
	phonebook.store_contact(value, i, 2);
	value = store_values(number, "Enter number: ");
	phonebook.store_contact(value, i, 3);
	value = store_values(secret, "Enter darkest secret: ");
	phonebook.store_contact(value, i, 4);
}
