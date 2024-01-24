/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 02:19:33 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/25 04:40:20 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"

class Contact
{
	private:
		std::string phoneNumber;
		std::string darkestSecret;
		std::string firstName;
		std::string lastName;
		std::string nickname;

	public:
		int index;
		bool set;

		Contact();
		Contact(int i);
		~Contact();
		void add();
		void displayInfo() const;
		void emptyContact();
};

#endif
