/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 02:19:25 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/30 16:08:12 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(int i) : index(i), set(false){} // parameterized constructor. It takes int i as a parameter, initializes index variable with value of i and sets "set" to false.

Contact::Contact() : set(false){} // default constructor. It initializes "set" variable/flag to false

Contact::~Contact(){} // destructor; called when an object of the class is being destroyed

/*---------------------------------------- displayInfo ----------------------------------------*\
 Displays contact informations (index, first name, last name, nickname) in a formatted manner.
 If any name or nickname is longer than 10 characters, it truncates them & appends a dot (.)
 The function is marked as "const" to indicate that it does not modify the state of the object
\*---------------------------------------------------------------------------------------------*/
void Contact::displayInfo() const
{
	std::cout << std::setw(10) << "|    " << index << '|';
	std::cout << std::setw(10) << (firstName.size() > 10 ? firstName.substr(0, 9) + '.' : firstName) << '|';
	std::cout << std::setw(10) << (lastName.size() > 10 ? lastName.substr(0, 9) + '.' : lastName) << '|';
	std::cout << std::setw(10) << (nickname.size() > 10 ? nickname.substr(0, 9) + '.' : nickname) << '|' << std::endl;
}

/*---------------------------------------- emptyContact ---------------------------------------*\
 Empties/clears contact informations (firstName, lastName, nickname, phoneNumber, darkestSecret).
 It sets the set flag to false & prints message indicating an error due to empty contact info.
\*---------------------------------------------------------------------------------------------*/
void Contact::emptyContact()
{
	firstName.clear();
	lastName.clear();
	nickname.clear();
	phoneNumber.clear();
	darkestSecret.clear();
	set = false;
	std::cout << "⚠️Error⚠️: Empty contact info" << std::endl;
}

/*-------------------------------------------- add --------------------------------------------*\
 Adds contact informations. Prompts user to input contacts first name, last name, nickname, phone
 number & darkest secret. It sets the "set" flag to true if all required fields are non-empty.
 If the "set" flag is not true, it calls emptyContact function to handle error & display message.
\*---------------------------------------------------------------------------------------------*/
void Contact::add()
{
	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);

	set = !firstName.empty() && !lastName.empty() && !nickname.empty() && !phoneNumber.empty() && !darkestSecret.empty();
	if (!set)
	{
		emptyContact();
	}
}
