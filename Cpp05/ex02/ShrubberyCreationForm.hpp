/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:44:43 by maricard          #+#    #+#             */
/*   Updated: 2023/09/12 18:45:11 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:

	public:
		//! Constructors and destructor
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();

		//! Operator overloading
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

		//! Functions
		void	execute(Bureaucrat const & executor);
};

#endif
