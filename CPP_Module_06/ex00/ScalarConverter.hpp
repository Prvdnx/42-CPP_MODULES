/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:11:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/07 19:32:35 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cctype>

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter &operator=(const ScalarConverter &);
		~ScalarConverter();

	public:
		static void	convert(const std::string &literal);
};
	void	convertToChar(double value);
	void	convertToInt(double value);
	void	convertToFloat(double value);

#endif



// class	ScalarConverter
// {
// 	private:
// 		ScalarConverter();
// 		ScalarConverter(const ScalarConverter &src);
// 		ScalarConverter &operator=(const ScalarConverter &rhs);
// 		~ScalarConverter();

// 		static void convertToChar(double value);
// 		static void convertToInt(double value);
// 		static void convertToFloat(double value);
		
// 	public:
// 		static void convert(const std::string &literal);
// };

// #endif
