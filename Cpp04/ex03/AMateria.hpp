/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:58:19 by maricard          #+#    #+#             */
/*   Updated: 2023/09/07 11:22:37 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string const	_type;

	public:
		//! Constructors and destructor
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& copy);
		~AMateria();

		//! Operator overloading
		AMateria& operator=(const AMateria& other);

		//! Functions
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
