/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:02:12 by maricard          #+#    #+#             */
/*   Updated: 2023/09/07 11:19:53 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class ICharacter
{
	private:

	public:
		//! Constructors and destructor
		//ICharacter();
		//ICharacter(const ICharacter& copy);
		virtual ~ICharacter() {}

		//! Operator overloading
		//ICharacter& operator=(const ICharacter& other);

		//! Functions
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
