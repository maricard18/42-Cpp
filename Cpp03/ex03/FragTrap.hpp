/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:11:01 by maricard          #+#    #+#             */
/*   Updated: 2023/08/25 09:57:20 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
	private:
		int		hit_points;
		int		attack_damage;

	public:
		//! Constructors and destructor
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		~FragTrap();

		//! Operator overloading
		FragTrap& operator=(const FragTrap& other);

		//! Functions
		int		getHitPoints(void);
		int		getAttackDamage(void);
		void	setHitPoints(int hit_points);
		void	setAttackDamage(int attack_damage);	


};

#endif
