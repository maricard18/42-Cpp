/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:36:32 by maricard          #+#    #+#             */
/*   Updated: 2023/07/03 11:25:55 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

void PhoneBook::get_contact(int a)
{
	int width = 10;
	
	std::cout << std::right << "|" << std::setw(7) << a + 1 << "|";
	if (contacts[a][0].length() > 10)
		std::cout << std::setw(width) << contacts[a][0].substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(width) << contacts[a][0] << "|";
	if (contacts[a][1].length() > 10)
		std::cout << std::setw(width) << contacts[a][1].substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(width) << contacts[a][1] << "|";
	if (contacts[a][2].length() > 10)
		std::cout << std::setw(width) << contacts[a][2].substr(0, 9) + "." << "|" << std::endl;
	else
		std::cout << std::setw(width) << contacts[a][2] << "|" << std::endl;
}

void PhoneBook::get_contact_info(int a)
{
	std::cout << "first name: " << contacts[a][0] << std::endl
			  << "last name: " << contacts[a][1] << std::endl
			  << "nickname: " << contacts[a][2] << std::endl
			  << "number: " << contacts[a][3] << std::endl
			  << "darkest secret: " << contacts[a][4] << std::endl
			  << std::endl;
}

void PhoneBook::store_contact(std::string value, int nbr, int field)
{
	contacts[nbr][field] = value;
}
