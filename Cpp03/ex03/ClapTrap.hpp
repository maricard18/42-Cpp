/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:01:53 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 09:49:47 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string name;

	public:
		//! Constructors and destructor
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copy);
		~ClapTrap();

		//! Operator overloading
		ClapTrap& operator=(const ClapTrap& other);
		
		//! Functions
		std::string	getName(void);
		void		setName(std::string name);

};

#endif

