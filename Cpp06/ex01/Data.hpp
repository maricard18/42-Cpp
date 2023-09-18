/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:01:18 by maricard          #+#    #+#             */
/*   Updated: 2023/09/18 20:15:39 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:

	public:
		//! Constructors and destructor
		Data();
		Data(const Data& copy);
		~Data();

		//! Operator overloading
		Data& operator=(const Data& other);
};

#endif
