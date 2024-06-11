/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/11 03:44:41 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <exception>
#include <iostream>
#include <deque>
#include <list>
#include <vector>

int	main()
{
	int arr[] = {2, 4, 6, 8, 10, 12};
	
	std::vector<int> vectorNumbers(arr, arr + 5);

	std::deque<int> dequeNumbers;
	dequeNumbers.push_back(1);
	dequeNumbers.push_back(25);
	dequeNumbers.push_back(42);
	dequeNumbers.push_back(21);
	
	std::list<int> listNumbers(arr, arr + 5);

	try
	{
		int	a = 6;
		easyfind(vectorNumbers, a);
		std::cout << '\n' << a << " was found in vector\n" << std::endl;

		int	b = 42;
		easyfind(dequeNumbers, b);
		std::cout << b << " was found in deque\n" << std::endl;
		
		int	c = 21;
		easyfind(listNumbers, c);
		std::cout << c << " was found in list\n" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
