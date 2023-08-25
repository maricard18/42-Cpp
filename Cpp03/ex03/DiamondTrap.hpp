/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:04:46 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 17:10:55 by maricard         ###   ########.fr       */
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
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& copy);
		~DiamondTrap();

		//! Operator overloading
		DiamondTrap& operator=(const DiamondTrap& other);

		//! Functions
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		void 	whoAmI(void);

};

#endif

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>

class DiamondTrap
{
	private:

	public:
		//! Constructors and destructor
		DiamondTrap();
		DiamondTrap(const DiamondTrap& copy);
		~DiamondTrap();

		//! Operator overloading
		DiamondTrap& operator=(const DiamondTrap& other);

		//! Functions

};

#endif
