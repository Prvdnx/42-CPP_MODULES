/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Abt_Animal.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:25:53 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/23 10:09:57 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Abt_Animal.hpp"

Abt_Animal::Abt_Animal()
{
	this->type = "Abt_Animal";
	std::cout << "Abt_Animal default constructor activated" << std::endl;
}

Abt_Animal::Abt_Animal(const Abt_Animal& other)
{
	this->type = other.type;
	std::cout << "Abt_Animal copy constructor activated" << std::endl;
}

Abt_Animal &Abt_Animal::operator=(const Abt_Animal &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	std::cout << "Abt_Animal copy assignment operator activated" << std::endl;
	return (*this);
}

Abt_Animal::~Abt_Animal()
{
	std::cout << "Abt_Animal destructor activated" << std::endl;
}

std::string	Abt_Animal::getType() const
{
	return this->type;
}

void	Abt_Animal::makeSound() const
{
	std::cout << "Yo! Abstract Animal Right Here!" << std::endl;
}
