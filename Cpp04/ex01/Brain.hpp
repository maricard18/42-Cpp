/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:22:36 by maricard          #+#    #+#             */
/*   Updated: 2023/08/30 13:02:45 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	protected:
		std::string _ideas[100];

	public:
		//! Constructors and destructor
		Brain();
		Brain(const Brain& copy);
		~Brain();

		//! Operator overloading
		Brain& operator=(const Brain& other);

		//! Setter
		void	setIdea(std::string idea, int i);

		//! Getter
		std::string getIdea(int i);

};

#endif
