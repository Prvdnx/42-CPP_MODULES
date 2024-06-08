/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:13:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/08 21:02:39 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>

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
	
	std::string newLiteral = literal;
	number = toDouble(newLiteral);
	// number = std::stod(number);
	
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

// double	ScalarConverter::toDouble(std::string &literal)
double	toDouble(std::string &literal)
{
	if (literal == "inf" || literal == "+inf" || literal == "inff" || literal == "+inff")
		return (std::numeric_limits<double>::infinity()); // return rep. of positive infinity as a double (template class to query arithmetic types)
	if (literal == "-inf" || literal == "-inff")
		return (-std::numeric_limits<double>::infinity());
	if (literal == "nan" || literal == "nanf")
		return (std::numeric_limits<double>::quiet_NaN()); // returns rep. of a quiet NaN (Not a Number)

	if (literal.back() == 'f')
		literal.pop_back(); // if string ends with 'f' or 'F' remove it

	std::istringstream iss(literal);
	double	result;
	iss >> result; // convert to double
	if (iss.fail())
	{
		std::cerr << "Invalid Input!🛑" << std::endl;
		exit(1);
	}
	return (result);
}
