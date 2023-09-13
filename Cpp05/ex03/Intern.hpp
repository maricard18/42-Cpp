/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:29:30 by maricard          #+#    #+#             */
/*   Updated: 2023/09/13 23:51:03 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		std::string _names[3];
		AForm *_functions[3];

	public:
		//! Constructors and destructor
		Intern();
		Intern(const Intern& copy);
		~Intern();

		//! Operator overloading
		Intern& operator=(const Intern& other);

		//! Functions
		AForm	*makeForm(std::string name, std::string target);
};

#endif
