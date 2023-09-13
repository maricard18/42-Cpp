/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:44:43 by maricard          #+#    #+#             */
/*   Updated: 2023/09/13 19:14:16 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
		
	public:
		//! Constructors and destructor
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();

		//! Operator overloading
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

		//! Functions
		void	execute(Bureaucrat const & executor);
		void	action() const;
};

std::ostream& operator<<(std::ostream &out, const ShrubberyCreationForm &c);

#endif
