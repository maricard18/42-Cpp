/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:36:47 by maricard          #+#    #+#             */
/*   Updated: 2023/06/28 20:16:16 by maricard         ###   ########.fr       */
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
		
        if (str.empty())
        {
			// this doesn't work
            std::cout << "You didn't enter anything. Try again." << std::endl;
            continue;
        }
        if (str.length() > 10)
        {
            keyword = str.substr(0, 9) + ".";
        }
        else
        {
            keyword = str;
            keyword.resize(10, ' ');
        }
        break;
	}
}

void Contact::set_values(void)
{
	store_values(first_name, "Enter first name: ");
	store_values(last_name, "Enter last name: ");
	store_values(nickname, "Enter nickname: ");
	store_values(number, "Enter number: ");
	store_values(secret, "Enter darkest secret: ");
	
	// need to store values in array of contacts (PhoneBook)
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
