/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:45:32 by maricard          #+#    #+#             */
/*   Updated: 2023/09/10 11:42:07 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		//! Constructors and destructor
		Ice();
		Ice(std::string const & type);
		Ice(const Ice& copy);
		~Ice();

		//! Operator overloading
		Ice& operator=(const Ice& other);

		//! Functions
		AMateria*	clone() const;
		void use(ICharacter& target);
};

#endif
