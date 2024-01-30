/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 02:19:41 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/30 17:49:28 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	PhoneBook phoneBook; // creates an instance of the Phonebook class named phoneBook
	std::string input; // declares a string variable named input to store user input
	int lastAddedIndex = 0; // creates int variable lastAddedIndex & initializes it to 0

	std::cout << "Input one operation (ADD / SEARCH / EXIT): "; // prints prompt for user to choose an operation: ADD, SEARCH, or EXIT
	while (std::getline(std::cin, input)) // loop that continues until user inputs "EXIT". Uses std::getline to read a line from user input into input variable
	{
		if (input == "ADD")
		{
			phoneBook.cont[lastAddedIndex].add();
			if (phoneBook.cont[lastAddedIndex].set)
				lastAddedIndex = (lastAddedIndex + 1) % 8; // circular indexing / cycling through a fixed-size array
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
			std::cout << "\n\tInvalid input!!🚫\n" << std::endl;
		}
		std::cout << "Input one operation (ADD / SEARCH / EXIT): ";
		/*------------------------------------- operation handling ------------------------------------*\
		program checks value of input & performs different operations accordingly;
		=> If input is "ADD," it calls add function on the contact at the lastAddedIndex position in the
		phonebook & if addition is successful, it increments lastAddedIndex & wraps around if it reaches 8.
		=> If input is "SEARCH," it calls the Search function on the phone book.
		=> If "EXIT," it breaks out of the loop. => If input is anything else, it prints error message.
		\*---------------------------------------------------------------------------------------------*/
	}
	return (0); // returns 0 if successfully executed
}
