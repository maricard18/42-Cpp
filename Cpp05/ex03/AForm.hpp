/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:57:01 by maricard          #+#    #+#             */
/*   Updated: 2023/09/12 13:28:07 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const _name;
		bool _status;
		int const _grade_to_sign;
		int const _grade_to_execute;

	public:
		//! Constructors and destructor
		AForm();
		AForm(std::string const name, int const grade_sign, int const grade_nedded);
		AForm(const AForm& copy);
		virtual ~AForm();

		//! Operator overloading
		AForm& operator=(const AForm& other);

		//! Functions
		std::string 	getName() const;
		bool 			getStatus();
		int 			getGradeToSign() const;
		int				getGradeToExecute() const;
		void			beSigned(Bureaucrat &bureaucrat);
		virtual void	execute(Bureaucrat const & executor) = 0;
		virtual void	action() const = 0;
		
		//! Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class FormNotExecutedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, const AForm &c);

#endif
