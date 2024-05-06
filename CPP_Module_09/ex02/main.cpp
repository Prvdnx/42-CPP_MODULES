/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 06:37:04 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/07 04:46:09 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PmergeMe.hpp"
#include	<iostream>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr << "Error: Insufficient arguments" << std::endl;
		return (1);
	}

	try
	{
		PmergeMe nums = PmergeMe(argv + 1);
		std::cout << "Before: ";
		if (nums.getVector().size() > 5)
		{
			for (int i = 0; i < 5; ++i)
				std::cout << nums.getVector()[i] << " ";
			std::cout << "[...]";
		}
		else
			for (int i = 0; i < nums.getVector().size(); i++)
				std::cout << nums.getVector()[i] << " ";
		std::cout << std::endl;

		nums.sortVector();
		nums.sortDeque();

		std::cout << "After: ";
		if (nums.getVector().size() > 5)
		{
			for (int i = 0; i < 5; ++i)
				std::cout << nums.getVector()[i] << " ";
			std::cout << "[...]";
		}
		else
			for (int i = 0; i < nums.getVector().size(); i++)
				std::cout << nums.getVector()[i] << " ";
		std::cout << std::endl;

		nums.printVectorResult();
		nums.printDequeResult();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}

	return (0);
}
	