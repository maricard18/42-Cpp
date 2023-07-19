/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:54:30 by maricard          #+#    #+#             */
/*   Updated: 2023/07/08 19:52:20 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

void File::store_line(std::string line)
{
	std::fstream file;

	file.open(fileName.c_str(), std::ios::app);
	file << line << std::endl;
}

void File::create_file(std::string name)
{
	std::fstream file;

	name += ".replace";
	fileName = name;
	file.open(fileName.c_str(), std::ios::out);
}
