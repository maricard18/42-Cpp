/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:11:01 by maricard          #+#    #+#             */
/*   Updated: 2023/10/04 13:05:21 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		//! Constructors and destructor
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		~FragTrap();

		//! Operator overloading
		FragTrap& operator=(const FragTrap& other);

		//! Functions
		void	attack(const std::string& target);
		void 	highFivesGuys(void);
		int		getHitPoints(void) const;
		int		getAttackDamage(void) const;
};

#endif
