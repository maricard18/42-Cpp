/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:57:49 by maricard          #+#    #+#             */
/*   Updated: 2023/07/08 18:11:35 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		void attack(void);
		void setType(std::string Weapon);
		void setName(std::string humanName);

		HumanA(std::string name, Weapon &club);

	private:
		std::string type;
		std::string name;
};

#endif
