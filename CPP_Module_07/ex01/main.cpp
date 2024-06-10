/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/11 00:33:12 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int len = sizeof(arr) / sizeof(arr[0]);

	std::cout << "\nOriginal array >=> ";
	iter(arr, len, printX<int>); // print array elements
	std::cout << std::endl;

	iter(arr, len, squareX<int>); // apply square function to array elements

	std::cout << "\nModified array >=> ";
	iter(arr, len, printX<const int>); // print array elements

	std::cout << '\n' << std::endl;

	return (0);
}
