/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 02:19:36 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/30 17:11:48 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/*---------------------------------------------------------------------------------------------*\
 constructor for PhoneBook class. It initializes cont array with Contact objects. For each index i
 from 0 to 7, it creates Contact object using parameterized constructor Contact(i) and assigns it
 to cont[i]. It then prints a message indicating that the phonebook has been constructed.
\*---------------------------------------------------------------------------------------------*/
PhoneBook::PhoneBook()
{
    for (int i = 0; i < 8; i++)
        cont[i] = Contact(i);
    std::cout << std::endl;
    std::cout << "✅ Phonebook 📖 Constructed ✅" << std::endl;
    std::cout << std::endl;
}

PhoneBook::~PhoneBook(){} // the destructor for the PhoneBook class.

/*------------------------------------------ Search -------------------------------------------*\
 the search functionality for the phonebook. Displays formatted list of contact information using
 the displayInfo function of each Contact object in the cont array. It prompts the user to enter
 an index and displays the information for the contact at that index if it is valid and set.
 If the index is invalid or the contact is not set, it prints an error message.
\*---------------------------------------------------------------------------------------------*/
void PhoneBook::Search() const
{
    std::string indexStr;

    std::cout << std::endl;
    std::cout << "     ========================================" << std::endl;
    std::cout << "     |Index|First Name| Last Name| Nickname |" << std::endl;
    std::cout << "     |-----|----------|----------|----------|" << std::endl;
    for (int i = 0; i < 8; i++)
	{
        cont[i].displayInfo();
    }
    std::cout << "     ----------------------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "Enter Index: ";
    std::getline(std::cin, indexStr);
    std::cout << std::endl;

    int index = atoi(indexStr.c_str());
    if (index >= 0 && index < 8 && cont[index].set)
	{
        cont[index].displayInfo();
    }
	else
	{
        std::cout << "⚠️Error⚠️: Invalid index 🚫" << std::endl;
        std::cout << std::endl;
    }
}
