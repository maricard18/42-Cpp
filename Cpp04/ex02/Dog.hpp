/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:21:07 by maricard          #+#    #+#             */
/*   Updated: 2023/09/06 09:57:14 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_DogBrain;

	public:
		//! Constructors and destructor
		Dog();
		Dog(const Dog& copy);
		~Dog();

		//! Operator overloading
		Dog& operator=(const Dog& other);

		//! Functions
		void	makeSound() const;
		void	storeIdeas() const;
		void	getIdea() const;
};

#endif
