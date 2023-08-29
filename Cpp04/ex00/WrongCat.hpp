/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:28:40 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 19:01:07 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		//! Constructors and destructor
		WrongCat();
		WrongCat(const WrongCat& copy);
		~WrongCat();

		//! Operator overloading
		WrongCat& operator=(const WrongCat& other);

		//! Functions
		void	makeSound() const;
};

#endif
