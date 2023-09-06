/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:21:07 by maricard          #+#    #+#             */
/*   Updated: 2023/09/06 13:32:05 by maricard         ###   ########.fr       */
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
		void	storeIdeas(std::string idea) const;
		void	getIdea() const;
};

#endif
