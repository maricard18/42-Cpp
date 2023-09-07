/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:45:44 by maricard          #+#    #+#             */
/*   Updated: 2023/09/07 10:59:55 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		//! Constructors and destructor
		Cure();
		Cure(const Cure& copy);
		~Cure();

		//! Operator overloading
		Cure& operator=(const Cure& other);

		//! Functions
		AMateria*	clone() const;

};

#endif