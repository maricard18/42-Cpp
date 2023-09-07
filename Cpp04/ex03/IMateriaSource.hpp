/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:09:53 by maricard          #+#    #+#             */
/*   Updated: 2023/09/07 11:20:13 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
	private:

	public:
		//! Constructors and destructor
		//IMateriaSource();
		//IMateriaSource(const IMateriaSource& copy);
		virtual ~IMateriaSource() {}

		//! Operator overloading
		//IMateriaSource& operator=(const IMateriaSource& other);

		//! Functions
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
