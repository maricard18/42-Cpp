/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:56:37 by maricard          #+#    #+#             */
/*   Updated: 2023/09/19 10:24:33 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serialize.hpp"

int main()
{
	Data 		data = {42};
	uintptr_t 	raw;

	raw = Serialize::serialize(&data);

	std::cout << RED "Address of serialized Data" RESET << std::endl;
	std::cout << "data: " << &data << std::endl;
	std::cout << "value of data: " << data.i << std::endl << std::endl;

	Data *other = Serialize::deserialize(raw);

	std::cout << RED "Address of deserialized new Data" RESET << std::endl;
	std::cout << "data: " << other << std::endl;
	std::cout << "value of data: " << other->i << std::endl;

	return (0);
}
