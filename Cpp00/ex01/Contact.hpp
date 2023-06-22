/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:13:17 by maricard          #+#    #+#             */
/*   Updated: 2023/06/22 20:14:55 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>
#include <string>

class Contact
{
private:
	char first_name[10];
	char last_name[10];
	char nickname[10];
	char number[10];
	char secret[10];

public:
	void set_values(void);
	std::string get_value(std::string str);
};

#endif