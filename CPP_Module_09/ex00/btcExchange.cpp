/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btcExchange.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:13:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/10 23:50:22 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"btcExchange.hpp"
#include	<fstream>
#include	<iostream>
#include	<stdexcept>
#include	<cstdlib>
#include	<cctype>
#include	<ctime>

BitcoinExchange::BitcoinExchange() {} // default constructor, no initialization
BitcoinExchange::~BitcoinExchange() {} // destructor for cleaning up; empty

BitcoinExchange::BitcoinExchange(const BitcoinExchange &name)
{
	*this = name;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		this->_map = other._map;
	return (*this);
}

bool BitcoinExchange::validateDate(const std::string &s)
{
	const char	*format = "%Y-%m-%d";
	struct tm	tp;
	
	return (strptime(s.c_str(), format, &tp) != NULL && std::isdigit(s[s.size() - 1]));
}

static void	trimFrontBack(std::string &s)
{
	s.erase(s.find_last_not_of(' ') + 1);
	s.erase(0, s.find_first_not_of(' '));
}

std::string BitcoinExchange::getKey(const std::string &s)
{
	size_t pos = s.find('|');

	std::string key = s.substr(0, pos);
	trimFrontBack(key);
	return (key);
}

float	BitcoinExchange::getValue(const std::string &s, char delimiter)
{
	size_t delimiterPos = s.find(delimiter);
    if (delimiterPos == std::string::npos || delimiterPos == s.length() - 1)
        throw std::runtime_error("Error: no value after delimiter");
	else
		//return (std::stof(s.substr(s.find(delimiter) + 1)));
		return static_cast<float>(std::atof(s.substr(delimiterPos + 1).c_str()));
}

void	BitcoinExchange::solve(const std::string &arg)
{
	std::ifstream dataFile("./data.csv"); //creates input file stream object dataFile to open file "./data.csv"
	if (!dataFile.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return;
	}

	std::string line;
	std::getline(dataFile, line);  // skip header line

	while (std::getline(dataFile, line))
	{
		std::string key = getKey(line);
		if (validateDate(key))
			_map[key] = getValue(line, ',');
	}

	std::ifstream inputFile(arg.c_str());
	if (!inputFile.is_open())
		throw std::runtime_error("Error: cannot open " + arg);

	std::getline(inputFile, line);  // skip header line

	while (std::getline(inputFile, line))
	{
		std::string key = getKey(line);
		if (validateDate(key))
		{
			float value = getValue(line, '|');
			if (value >= 0 && value <= 1000)
			{
				std::map<std::string, double>::iterator it = _map.lower_bound(key);
				if (it != _map.end())
					std::cout << key << " => " << value << " = " << value * it->second << '\n';
			}
			else if (value > 1000)
				std::cout << "Error: too large a number.\n";
			else
				std::cout << "Error: not a positive number.\n";
		}
		else
			std::cout << "Error: bad input => " << key << '\n';
	}
}
