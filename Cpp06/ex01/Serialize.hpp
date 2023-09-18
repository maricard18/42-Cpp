/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:59:31 by maricard          #+#    #+#             */
/*   Updated: 2023/09/18 20:00:57 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

class Serialize
{
	private:

	public:
		//! Constructors and destructor
		Serialize();
		Serialize(const Serialize& copy);
		~Serialize();

		//! Operator overloading
		Serialize& operator=(const Serialize& other);

		//! Functions
		uintptr_t 	serialize(Data *ptr);
		Data 		*deserialize(uintptr_t raw);
};

#endif
