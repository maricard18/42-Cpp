/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:57:01 by maricard          #+#    #+#             */
/*   Updated: 2023/09/13 23:51:57 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define RESET "\033[0m"

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		bool _status;
		int const _grade_to_sign;
		int const _grade_to_execute;

	public:
		//! Constructors and destructor
		Form();
		Form(std::string const name, int grade, int const grade_to_sign);
		Form(const Form& copy);
		~Form();

		//! Operator overloading
		Form& operator=(const Form& other);

		//! Functions
		std::string getName() const;
		bool 		getStatus();
		int 		getGradeToSign() const;
		int			getGradeToExecute() const;
		void		beSigned(Bureaucrat &bureaucrat);
		
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
};

std::ostream& operator<<(std::ostream &out, const Form &c);

#endif
