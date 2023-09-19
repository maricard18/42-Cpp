/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:59:31 by maricard          #+#    #+#             */
/*   Updated: 2023/09/19 10:23:59 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"

class Serialize
{
	private:
		//! Constructors and destructor
		Serialize();
		Serialize(const Serialize& copy);
		~Serialize();

		//! Operator overloading
		Serialize& operator=(const Serialize& other);

	public:
		//! Functions
		static uintptr_t 	serialize(Data *ptr);
		static Data* 	deserialize(uintptr_t raw);
};

#endif
