/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:26:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/23 09:47:49 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default constructor activated" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor activated" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
		Animal::operator=(rhs); //call base class assignment operator
	std::cout << "Cat copy assignment operator activated" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor activated" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
