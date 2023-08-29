/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:13:35 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 18:28:23 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		//! Constructors and destructor
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		~WrongAnimal();

		//! Operator overloading
		WrongAnimal& operator=(const WrongAnimal& other);

		//! Functions
		void	makeSound() const;
};

#endif
