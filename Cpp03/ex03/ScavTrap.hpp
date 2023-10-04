/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:11:01 by maricard          #+#    #+#             */
/*   Updated: 2023/10/04 13:05:04 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		//! Constructors and destructor
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& copy);

		//! Operator overloading
		ScavTrap& operator=(const ScavTrap& other);

		//! Functions
		void 	attack(const std::string& target);
		void 	guardGate(void);
		int 	getEnergyPoints(void) const;
};

#endif
