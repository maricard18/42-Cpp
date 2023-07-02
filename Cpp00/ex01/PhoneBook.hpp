/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:22:59 by maricard          #+#    #+#             */
/*   Updated: 2023/07/02 12:48:09 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <cstdio>
# include <iomanip>
# include "Contact.hpp"

class Contact;

class PhoneBook
{
	private:
		std::string contacts[8][5];

	public:
		void get_contact(int a);
		void get_contact_info(int a);
		void store_contact(std::string value, int nbr, int field);
};

#endif
