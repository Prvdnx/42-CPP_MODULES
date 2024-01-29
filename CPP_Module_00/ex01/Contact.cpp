/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 02:19:25 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/25 04:51:56 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(int i) : index(i), set(false){}

Contact::Contact() : set(false){}

Contact::~Contact(){}

void Contact::displayInfo() const
{
	std::cout << std::setw(10) << "|    " << index << '|';
	std::cout << std::setw(10) << (firstName.size() > 10 ? firstName.substr(0, 9) + '.' : firstName) << '|';
	std::cout << std::setw(10) << (lastName.size() > 10 ? lastName.substr(0, 9) + '.' : lastName) << '|';
	std::cout << std::setw(10) << (nickname.size() > 10 ? nickname.substr(0, 9) + '.' : nickname) << '|' << std::endl;
}

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
