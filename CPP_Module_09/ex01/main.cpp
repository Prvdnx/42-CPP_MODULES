/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:54:04 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/01 07:22:20 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"RPN.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error: invalid arguments" << std::endl;
		std::cerr << "usage: ./RPN <expr>" << std::endl;
		return (1);
	}

	RPN	calculator;
	try
	{
		calculator.parse(argv[1]);
		calculator.operate();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}

	return (0);
}
