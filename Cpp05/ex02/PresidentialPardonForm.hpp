/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:19:12 by maricard          #+#    #+#             */
/*   Updated: 2023/09/13 17:55:50 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:

	public:
		//! Constructors and destructor
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		~PresidentialPardonForm();

		//! Operator overloading
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

		//! Functions
		void	execute(Bureaucrat const & executor);
};

std::ostream& operator<<(std::ostream &out, const PresidentialPardonForm &c);


#endif
