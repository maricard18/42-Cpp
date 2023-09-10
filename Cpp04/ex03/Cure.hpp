/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:45:44 by maricard          #+#    #+#             */
/*   Updated: 2023/09/10 11:42:12 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		//! Constructors and destructor
		Cure();
		Cure(std::string const & type);
		Cure(const Cure& copy);
		~Cure();

		//! Operator overloading
		Cure& operator=(const Cure& other);

		//! Functions
		AMateria*	clone() const;
		void use(ICharacter& target);
};

#endif
