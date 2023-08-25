/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:01:53 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 09:53:22 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;

	public:
		//! Constructors and destructor
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copy);
		~ClapTrap();

		//! Operator overloading
		ClapTrap& operator=(const ClapTrap& other);
		
		//! Functions
		void 	attack(const std::string& target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		
		//! Getters
		std::string	getName(void);
		int			getHitPoints(void);
		int			getEnergyPoints(void);
		int			getAttackDamage(void);

		//! Setters
		void		setName(std::string name);
		void		setHitPoints(int hit_points);
		void		setEnergyPoints(int energy_points);
		void		setAttackDamage(int attack_damage);

};

#endif
