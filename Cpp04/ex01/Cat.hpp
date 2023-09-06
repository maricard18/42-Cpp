/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:22:15 by maricard          #+#    #+#             */
/*   Updated: 2023/09/06 13:55:07 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_CatBrain;

	public:
		//! Constructors and destructor
		Cat();
		Cat(const Cat& copy);
		~Cat();

		//! Operator overloading
		Cat& operator=(const Cat& other);

		//! Functions
		void	makeSound() const;
		void	storeIdeas(std::string idea) const;
		void	getIdea() const;
};

#endif
