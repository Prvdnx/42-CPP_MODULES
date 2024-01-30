/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 02:19:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/30 16:17:33 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main.hpp"

class PhoneBook // declares PhoneBook class.
{
	public:
		PhoneBook(); // default constructor
		~PhoneBook(); // destructor
		void Search() const; // a member function for searching for a Contact using it's index ("const" cos it isn't meant to modify the data)

		Contact	cont[8]; // public array of Contact objects named cont for storing up to 8 contacts
};

#endif
