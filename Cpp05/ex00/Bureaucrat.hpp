/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:54:35 by maricard          #+#    #+#             */
/*   Updated: 2023/09/13 23:52:04 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define RESET "\033[0m"

class Bureaucrat
{
	private:
		std::string const _name;
		int	_grade;

	public:
		//! Constructors and destructor
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		~Bureaucrat();

		//! Operator overloading
		Bureaucrat& operator=(const Bureaucrat& other);

		//! Functions
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();

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

std::ostream& operator<<(std::ostream &out, const Bureaucrat &c);

#endif
