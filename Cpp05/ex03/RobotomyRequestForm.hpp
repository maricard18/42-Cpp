/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:17:36 by maricard          #+#    #+#             */
/*   Updated: 2023/09/13 23:36:53 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include <stdlib.h>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;

	public:
		//! Constructors and destructor
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();

		//! Operator overloading
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

		//! Functions
		void	execute(Bureaucrat const & executor);
		void	action() const;
};

std::ostream& operator<<(std::ostream &out, const RobotomyRequestForm &c);

#endif
