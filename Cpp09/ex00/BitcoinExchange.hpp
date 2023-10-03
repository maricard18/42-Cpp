/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:30:27 by maricard          #+#    #+#             */
/*   Updated: 2023/10/03 15:32:21 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <stdlib.h>
# include <fstream>
# include <string>
# include <iomanip>
# include <climits>
# include <ctime>
# include <map>

# define RED 	"\033[1;31m"
# define GREEN 	"\033[1;32m"
# define YELLOW "\033[1;33m"
# define WHITE 	"\033[1;37m"
# define RESET 	"\033[0m"\

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_data;

	public:
		//! Constructors and destructor
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		~BitcoinExchange();

		//! Operator overloading
		BitcoinExchange& operator=(const BitcoinExchange& other);

		//! Functions
		void		readDataBase();
		void		readInputFile(char *inputFile);
		bool		checkDate(std::string date);
		std::string checkLine(std::string line);
		std::string	getBitcoinValue(std::string date, long int value);

		//! Helper
		void	print();
		bool 	isFloat(const std::string& str);
};

#endif
