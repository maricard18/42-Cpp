/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:22:36 by maricard          #+#    #+#             */
/*   Updated: 2023/08/30 16:35:06 by maricard         ###   ########.fr       */
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
		virtual ~Brain();

		//! Operator overloading
		Brain& operator=(const Brain& other);

		//! Setter
		void			setIdea(std::string idea, int i);
		virtual void	storeIdeas() const = 0;

		//! Getter
		std::string getIdea(int i);

};

#endif
