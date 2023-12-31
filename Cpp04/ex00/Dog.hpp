/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:21:07 by maricard          #+#    #+#             */
/*   Updated: 2023/09/11 12:44:20 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		//! Constructors and destructor
		Dog();
		Dog(const Dog& copy);
		virtual ~Dog();

		//! Operator overloading
		Dog& operator=(const Dog& other);

		//! Functions
		void	makeSound() const;
};

#endif
