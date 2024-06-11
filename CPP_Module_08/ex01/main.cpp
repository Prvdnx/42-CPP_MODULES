/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/12 05:16:35 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main()
{
	try
	{
		Span	test1(100000);
		for (size_t i = 0; i < 100000; i++)
			test1.addNumber(10);
		std::cout << "\nLongest span in test1: " << test1.longestSpan() << std::endl;

		Span	test2(20);
		test2.addNumber(50);
		test2.addNumber(150);
		test2.addNumber(25);
		test2.addNumber(23);
		test2.addNumber(52);
		test2.printData();
		std::cout << "\nLongest span in test2: " << test2.longestSpan() << std::endl;
		std::cout << "Shortest span in test2: " << test2.shortestSpan() << std::endl;

		Span	test3(3);
		int range_arr[] = {1, 20, 3};
		std::vector<int> range(range_arr, range_arr + 3);
		test3.addRange(range.begin(), range.end());
		test3.printData();
		std::cout << "\nLongest span in test3: " << test3.longestSpan() << std::endl;
		std::cout << "Shortest span in test3: " << test3.shortestSpan() << '\n' << std::endl;

		Span	test4(5); // span with 5 elements capacity
		for (size_t i = 0; i < 6; i++) // adding 6 elements to exceed capacity
			test1.addNumber(10);
		std::cout << "\nLongest span in test4: " << test1.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
