/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:35:05 by maricard          #+#    #+#             */
/*   Updated: 2023/09/26 23:42:03 by maricard         ###   ########.fr       */
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
		throw std::runtime_error("failed to open database");
	
	getline(file, line);
	while (getline(file, line))
	{
		date = line.substr(0, line.find(','));
		value = line.substr(line.find(',') + 1, line.length());
		this->_data[date] = static_cast<float>(atof(value.c_str()));
	}
}

void	BitcoinExchange::readInputFile(char *inputFile)
{
	std::ifstream	file;
	std::string		line;
	std::string 	final;

    file.open(inputFile);
	if (!file.is_open())
		throw std::runtime_error("failed to open file");
	
	getline(file, line);
	while (getline(file, line))
	{
		if (line.length() == 0)
			continue ;
		final = checkLine(line);
		std::cout << final << std::endl;
	}
}

std::string	BitcoinExchange::checkLine(std::string line)
{
	std::stringstream	stream(line);
	std::string			date;
	std::string			value;
	char				delim;

	if (line.length() < 14)
		return "Error: bad sytnax => \'" + line + "\'";
	else if (!(stream >> date >> delim >> value))
		return "Error: bad input => \'" + date + "\'";
	else if (date.length() != 10)
		return "Error: bad input => \'" + date + "\'";
	else if (delim != '|')
		return "Error: bad syntax => \'" + date + "\'";
	else if (!checkDate(date))
		return "Error: bad input => \'" + date + "\'";

	long int	number = atoll(value.c_str());
	
	if (!isFloat(value))
		return "Error: not a number => \'" + value + "\'";
	else if (value.length() > 5 || number > 1000)
		return "Error: too large a number => \'" + value + "\'";
	else if (number < 0)
		return "Error: not a positive number => \'" + value + "\'";

	return getBitcoinValue(date, number);
}

bool	BitcoinExchange::checkDate(std::string date)
{
	std::stringstream	stream(date);
	struct tm 			dt = {};
	struct tm 			normalized = {};
	char				hifen;
	
	if (!(stream >> dt.tm_year >> hifen >> dt.tm_mon >> hifen >> dt.tm_mday))
		return false;	
	else if (std::to_string(dt.tm_year).length() != 4)
		return false;
	else if (std::to_string(dt.tm_mon).length() > 2 || dt.tm_mon > 12)
		return false;
	else if (std::to_string(dt.tm_mday).length() > 2)
		return false;

	dt.tm_mon -= 1;
	dt.tm_year -= 1900;
	normalized = dt;
	mktime(&normalized);

	if (normalized.tm_year != dt.tm_year \
			|| normalized.tm_mon != dt.tm_mon \
				|| normalized.tm_mday != dt.tm_mday)
		return false;
	return true;
}

std::string	BitcoinExchange::getBitcoinValue(std::string date, long int number)
{
	std::map<std::string, float>::iterator	begin = this->_data.begin();
	std::map<std::string, float>::iterator	end = this->_data.end();
	
	while (begin != end)
	{
		if (date == begin->first)
			return date + " => " + std::to_string(begin->second * number);
		begin++;
	}
	
	begin = this->_data.begin();
	
	while (begin != end)
	{
		if (begin->first > date)
		{
			begin--;
			return date + " => " + std::to_string(begin->second * number);
		}
		begin++;
	}

	begin--;

	return date + " => " + std::to_string(begin->second * number);
}

void	BitcoinExchange::print()
{
	std::map<std::string, float>::iterator	begin = this->_data.begin();
	std::map<std::string, float>::iterator	end = this->_data.end();

	while (begin != end)
	{
		std::cout << begin->first << begin->second << std::endl;
		begin++;
	}
}

bool BitcoinExchange::isFloat(const std::string& str)
{
    for (unsigned long i = 0; i < str.length(); i++)
	{
        if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != '-')
            return false;
    }
    return true;
}