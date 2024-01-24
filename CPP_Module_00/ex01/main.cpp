/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 02:19:41 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/25 05:18:59 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	PhoneBook phoneBook;
	std::string input;
	int lastAddedIndex = 0;

	std::cout << "Input: ";
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
		{
			phoneBook.cont[lastAddedIndex].add();
			if (phoneBook.cont[lastAddedIndex].set)
				lastAddedIndex = (lastAddedIndex + 1) % 8;
		}
		else if (input == "SEARCH")
		{
			phoneBook.Search();
		}
		else if (input == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "\n\tWrong input!\n\tEnter: ADD or SEARCH or EXIT\n\tWith no spaces\n" << std::endl;
		}
		std::cout << "Input: ";
	}
	return (0);
}
