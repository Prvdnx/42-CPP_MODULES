/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:25:53 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/24 23:17:14 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal()
{
	this->type = "A_Animal";
	std::cout << "A_Animal default constructor activated" << std::endl;
}

A_Animal::A_Animal(const A_Animal& other)
{
	this->type = other.type;
	std::cout << "A_Animal copy constructor activated" << std::endl;
}

A_Animal &A_Animal::operator=(const A_Animal &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "A_Animal copy assignment operator activated" << std::endl;
	return (*this);
}

A_Animal::~A_Animal()
{
	std::cout << "A_Animal destructor activated" << std::endl;
}

std::string	A_Animal::getType() const
{
	return this->type;
}

void	A_Animal::makeSound() const
{
	std::cout << "Yo! Abstract Animal Right Here!" << std::endl;
}
