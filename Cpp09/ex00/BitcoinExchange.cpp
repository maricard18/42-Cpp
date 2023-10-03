/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:35:05 by maricard          #+#    #+#             */
/*   Updated: 2023/10/03 15:58:21 by maricard         ###   ########.fr       */
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
	if (this == &other)
		return (*this);
	_data = other._data;
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
	else if (number > 1000)
		return "Error: too large a number => \'" + value + "\'";
	else if (number < 0)
		return "Error: not a positive number => \'" + value + "\'";

	return getBitcoinValue(date, number);
}

bool	BitcoinExchange::checkDate(std::string date)
{
	std::stringstream	stream(date);
	std::stringstream	year;
	std::stringstream	month;
	std::stringstream	day;
	struct tm 			dt = {};
	struct tm 			normalized = {};
	char				hifen;
	
	if (!(stream >> dt.tm_year >> hifen >> dt.tm_mon >> hifen >> dt.tm_mday))
		return false;
	
	year << dt.tm_year;
	month << dt.tm_mon;
	day << dt.tm_mday;
	
	if ((year.str()).length() != 4)
		return false;
	else if ((month.str()).length() > 2 || dt.tm_mon > 12)
		return false;
	else if ((day.str()).length() > 2)
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
	std::stringstream	stream;
	
	while (begin != end)
	{
		if (date == begin->first)
		{
			stream << std::fixed << std::setprecision(2) << begin->second * number;
			return date + " => " + stream.str();
		}
		begin++;
	}
	
	begin = this->_data.begin();
	stream.clear();
	
	while (begin != end)
	{
		if (begin->first > date)
		{
			begin--;
			stream << std::fixed << std::setprecision(2) << begin->second * number;
			return date + " => " + stream.str();
		}
		begin++;
	}

	begin--;
	stream.clear();
	stream << begin->second * number;

	return date + " => " + stream.str();
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
