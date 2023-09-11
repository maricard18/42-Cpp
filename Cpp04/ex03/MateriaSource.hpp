/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:10:41 by maricard          #+#    #+#             */
/*   Updated: 2023/09/11 13:07:26 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materia[4];

	public:
		//! Constructors and destructor
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		virtual ~MateriaSource();

		//! Operator overloading
		MateriaSource& operator=(const MateriaSource& other);

		//! Functions
		void 		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};

#endif
