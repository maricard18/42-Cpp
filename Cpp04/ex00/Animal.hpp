/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:20:32 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 18:26:30 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		//! Constructors and destructor
		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();

		//! Operator overloading
		Animal& operator=(const Animal& other);

		//! Functions
		virtual void	makeSound() const;

		//! Getter
		std::string	getType() const;
};

#endif
