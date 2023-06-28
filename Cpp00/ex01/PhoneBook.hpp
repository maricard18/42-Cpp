/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:22:59 by maricard          #+#    #+#             */
/*   Updated: 2023/06/28 20:24:23 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstdio>
# include "Contact.hpp"

class PhoneBook
{
	private:
		std::string contact;

	public:
		void create_contact(int *i);
		void contact_list(int *i);
};

#endif
