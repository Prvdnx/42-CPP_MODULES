/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 02:19:33 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/30 16:09:33 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"

class Contact // declares Contact class
{
	private: // private member variables to store diff attributes of a contact; "private", meaning they can only be accessed/modified within the class itself.
		std::string phoneNumber;
		std::string darkestSecret;
		std::string firstName;
		std::string lastName;
		std::string nickname;
		
	public: // public member variables represent the index of Contact and a flag (set) indicating whether the contact is populated with information.
		int index;
		bool set;

		Contact(); // default constructor; called when an object of Contact class is created without arguments
		Contact(int i); // parameterized constructor; called when an object of Contact class is created with an int argument
		~Contact(); // destructor; called when an object of Contact class is destroyed (e.g., when it goes out of scope)
		void add(); // member function to add contact informations (Prompts user to input contact informations)
		void displayInfo() const; // member function to display contact informations ("const" cos it's not supposed to modify state of the object)
		void emptyContact(); // member function to reset contact information to an empty state
};

#endif
