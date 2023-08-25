/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:11:01 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 09:58:13 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class ScavTrap : public FragTrap, public ClapTrap
{
	private:
		int		energy_points;

	public:
		//! Constructors and destructor
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap();

		//! Operator overloading
		ScavTrap& operator=(const ScavTrap& other);

		//! Functions
		void 	attack(const std::string& target);
		int		getEnergyPoints(void);
		void	setEnergyPoints(int energy_points);
		

};

#endif
