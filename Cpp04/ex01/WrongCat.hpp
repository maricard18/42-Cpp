/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:28:40 by maricard          #+#    #+#             */
/*   Updated: 2023/09/06 14:08:50 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"

class WrongCat : public Animal
{
	private:
		Brain	*_WrongCatBrain;

	public:
		//! Constructors and destructor
		WrongCat();
		WrongCat(const WrongCat& copy);
		~WrongCat();

		//! Operator overloading
		WrongCat& operator=(const WrongCat& other);

		//! Functions
		void	makeSound() const;
		void	storeIdeas() const;
		void	getIdea() const;
};

#endif
