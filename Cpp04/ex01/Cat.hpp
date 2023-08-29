/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:22:15 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 18:23:56 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		//! Constructors and destructor
		Cat();
		Cat(const Cat& copy);
		~Cat();

		//! Operator overloading
		Cat& operator=(const Cat& other);

		//! Functions
		void	makeSound() const;
};

#endif
