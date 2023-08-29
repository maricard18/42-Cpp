/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:11:01 by maricard          #+#    #+#             */
/*   Updated: 2023/08/29 14:27:55 by maricard         ###   ########.fr       */
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
};

#endif
