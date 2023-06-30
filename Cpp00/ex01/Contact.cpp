/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:36:47 by maricard          #+#    #+#             */
/*   Updated: 2023/06/30 11:57:34 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
# include "PhoneBook.hpp"

std::string	store_values(std::string &keyword, std::string message, int flag)
{
	std::string str;
	
	while (1)
	{
		std::cout << message;
        std::cin >> str;
		
        if (str.length() == 0) // ! this doesn't work
        {
            std::cout << "You didn't enter anything. Try again." << std::endl;
            continue;
        }
        if (str.length() > 10 && flag < 3)
        {
            keyword = str.substr(0, 9) + ".";
        }
        else
        {
            keyword = str;
        }
        break;
	}
	return (keyword);
}

void Contact::set_values(PhoneBook &phonebook, int i)
{
	std::string value;
	
	value = store_values(first_name, "Enter first name: ", 0);
	phonebook.store_contact(value, i, 0);
	value = store_values(last_name, "Enter last name: ", 1);
	phonebook.store_contact(value, i, 1);
	value = store_values(nickname, "Enter nickname: ", 2);
	phonebook.store_contact(value, i, 2);
	value = store_values(number, "Enter number: ", 3);
	phonebook.store_contact(value, i, 3);
	value = store_values(secret, "Enter darkest secret: ", 4);
	phonebook.store_contact(value, i, 4);
}
