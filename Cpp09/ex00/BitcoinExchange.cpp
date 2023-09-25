/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:35:05 by maricard          #+#    #+#             */
/*   Updated: 2023/09/25 19:43:07 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	*this = copy;
}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other)
{
	//! how do I do this ?
	(void)other;
	return *this;
}

void	BitcoinExchange::readDataBase()
{
	std::ifstream	file;
	std::string		line;
	std::string 	date;
	std::string		value;

    file.open("data.csv");
	if (!file.is_open())
		throw std::runtime_error("Failed to open file.");
	getline(file, line);
	while (getline(file, line))
	{
		date = line.substr(0, line.find(','));
		value = line.substr(line.find(',') + 1, line.length());
		this->_data[date] = static_cast<float>(std::atof(value.c_str()));
	}
}

void	BitcoinExchange::readInputFile(char *file)
{
	(void)file;
}

void	BitcoinExchange::print()
{
	std::map<std::string, float>::iterator	begin = this->_data.begin();
	std::map<std::string, float>::iterator	end = this->_data.end();

	while (begin != end)
	{
		std::cout << begin->first << " " << begin->second << std::endl;
		begin++;
	}
}
