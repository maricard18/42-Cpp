/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:36:47 by maricard          #+#    #+#             */
/*   Updated: 2023/06/30 13:17:48 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
# include "PhoneBook.hpp"

std::string	store_values(std::string &keyword, std::string message)
{
	std::string str;
	
	while (1)
	{
		std::cout << message;
        std::cin >> str;
		
        if (str.length() == 0) // ! this doesn't work // use getline ?
        {
            std::cout << "You didn't enter anything. Try again." << std::endl;
            continue;
        }
        keyword = str;
        break;
	}
	return (keyword);
}

void Contact::set_values(PhoneBook &phonebook, int i)
{
	std::string value;
	
	value = store_values(first_name, "Enter first name: ");
	phonebook.store_contact(value, i);
	value = store_values(last_name, "Enter last name: ");
	phonebook.store_contact(value, i);
	value = store_values(nickname, "Enter nickname: ");
	phonebook.store_contact(value, i);
	value = store_values(number, "Enter number: ");
	phonebook.store_contact(value, i);
	value = store_values(secret, "Enter darkest secret: ");
	phonebook.store_contact(value, i);
}
