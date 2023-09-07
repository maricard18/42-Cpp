/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:45:32 by maricard          #+#    #+#             */
/*   Updated: 2023/09/07 11:00:13 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		//! Constructors and destructor
		Ice();
		Ice(const Ice& copy);
		~Ice();

		//! Operator overloading
		Ice& operator=(const Ice& other);

		//! Functions
		AMateria*	clone() const;
};

#endif
