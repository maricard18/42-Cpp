/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:58:12 by maricard          #+#    #+#             */
/*   Updated: 2023/07/11 14:14:31 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		void attack(void);
		void setName(std::string humanName);
		void setWeapon(Weapon &club);

		HumanB(std::string name);

	private:
		std::string type;
		std::string name;
		Weapon *club;
};

#endif

