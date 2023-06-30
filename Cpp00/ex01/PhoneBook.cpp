/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:36:32 by maricard          #+#    #+#             */
/*   Updated: 2023/06/30 12:01:24 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

void PhoneBook::get_contact(int a)
{
	int width = 10;
	
	std::cout << std::left
			  << "|" << std::setw(width) << a + 1 << "|"
			  << std::setw(width) << contacts[a][0] << "|"
			  << std::setw(width) << contacts[a][1] << "|"
			  << std::setw(width) << contacts[a][2] << "|"
			  << std::endl;
}

void PhoneBook::get_contact_info(int a)
{
	std::cout << std::endl
			  << "first name: " << contacts[a][0] << std::endl
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
