/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/10 22:23:16 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	try
	{
		Array<int> arr(12);	// create array of int obj of 5 elements

		std::cout << "Initial values: ";	// print initial/garbage values
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;

		for (unsigned int i = 0; i < arr.size(); i++)	// modify values
			arr[i] = i * 2;

		std::cout << "Modified values: "; 	// print modified values
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;

		std::cout << "Trying to access out of bounds element: ";	// access elements that are out of bound
		std::cout << arr[16] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
