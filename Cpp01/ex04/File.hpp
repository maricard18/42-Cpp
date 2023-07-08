/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:55:01 by maricard          #+#    #+#             */
/*   Updated: 2023/07/08 19:37:53 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>

class File
{
	public:
		void store_line(std::string line);
		void create_file(std::string file_name);
		
	private:
		std::string fileName;
		std::fstream new_file;
};

#endif