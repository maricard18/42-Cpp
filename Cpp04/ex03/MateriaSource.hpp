/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:10:41 by maricard          #+#    #+#             */
/*   Updated: 2023/09/07 11:11:34 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

	public:
		//! Constructors and destructor
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		~MateriaSource();

		//! Operator overloading
		MateriaSource& operator=(const MateriaSource& other);

		//! Functions
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
