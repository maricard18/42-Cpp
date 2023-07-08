/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:50:53 by maricard          #+#    #+#             */
/*   Updated: 2023/07/08 19:59:03 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "File.hpp"

void	search_and_replace(File &obj, std::string line, char **argv)
{
    std::string ocurrence = argv[2];
    std::string replacement = argv[3];
    size_t found = line.find(ocurrence);
	
	while (found != std::string::npos)
	{
        line.erase(found, ocurrence.length());
        line.insert(found, replacement);
        found = line.find(ocurrence, found + replacement.length());
    }
	obj.store_line(line);
}

void	file_manipulation(char **argv)
{
	File obj;
	std::fstream file;
	std::string line;
	std::string name = argv[1];

	file.open(name.c_str(), std::ios::in);
	if (file.is_open())
	{
		obj.create_file(name);
		while (getline(file, line))
		{
			search_and_replace(obj, line, argv);
		}
		file.close();
	} 
	else
	{
		std::cout << "Failed to open file \"" << argv[1] << "\"." << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
		file_manipulation(argv);
	else
	{
		std::cout << "Incorrect number of arguments :(" << std::endl;
		std::cout << "<filename> <ocurrence> <replacement>" << std::endl;
	}
}
