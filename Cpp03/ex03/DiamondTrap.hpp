/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:04:46 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 14:42:02 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;

	public:
		//! Constructors and destructor
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& copy);
		~DiamondTrap();

		//! Operator overloading
		DiamondTrap& operator=(const DiamondTrap& other);

		//! Functions
		using 	ScavTrap::attack;
		void 	whoAmI(void);
};

#endif
