/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:13:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/07 20:21:50 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) { *this = src; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &) { return (*this); }

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(const std::string &literal)
{
	double	number;

	if (literal.size() == 1 && std::isalpha(literal[0]))
	{
		char	charValue = literal[0];
		std::cout << "char: '" << charValue << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(charValue) << std::endl;
		std::cout << "float: " << static_cast<float>(charValue) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(charValue) << std::endl;
		
		return;
	}

	std::istringstream iss(literal);
	iss >> number;
	if (iss.fail())
	{
		std::cerr << "Invalid Input!🛑" << std::endl;
		exit(1);
	}

	convertToChar(number);
	convertToInt(number);
	convertToFloat(number);
	std::cout << "double: " << number << std::endl;
}

// void	ScalarConverter::convertToChar(double value)
void	convertToChar(double value)
{
	if (std::isnan(value) || std::isinf(value))
		std::cout << "char: impossible" << std::endl;
	else
	{
		char charValue = static_cast<char>(value);
		if (std::isprint(charValue))
			std::cout << "char: '" << charValue << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
}

// void	ScalarConverter::convertToInt(double value)
void	convertToInt(double value)
{
	if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

// void	ScalarConverter::convertToFloat(double value)
void	convertToFloat(double value)
{
	if (std::isnan(value) || std::isinf(value))
		std::cout << "float: " << value << "f" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
}
