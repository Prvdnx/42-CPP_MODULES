/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 02:19:36 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/25 04:52:19 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook()
{
    for (int i = 0; i < 8; i++)
        cont[i] = Contact(i);
    std::cout << std::endl;
    std::cout << "✅ Phonebook 📖 Constructed ✅" << std::endl;
    std::cout << std::endl;
}

PhoneBook::~PhoneBook(){}

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
