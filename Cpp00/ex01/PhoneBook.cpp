/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:36:32 by maricard          #+#    #+#             */
/*   Updated: 2023/06/29 12:17:17 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

void PhoneBook::get_contact(int a)
{
	// text must be right aligned
	std::cout << a << "         "<< "|";
	std::cout << contacts[a][0] << "|";
	std::cout << contacts[a][1] << "|";
	std::cout << contacts[a][2] << std::endl;
}

void PhoneBook::get_contact_info(int a)
{
	std::cout << "first name: " << contacts[a][0] << std::endl;
	std::cout << "last name: " << contacts[a][1] << std::endl;
	std::cout << "nickname: " << contacts[a][2] << std::endl;
	std::cout << "number: " << contacts[a][3] << std::endl;
	std::cout << "darkest secret: " << contacts[a][4] << std::endl;
}

void PhoneBook::store_contact(std::string value, int nbr, int field)
{
	contacts[nbr][field] = value;
}
