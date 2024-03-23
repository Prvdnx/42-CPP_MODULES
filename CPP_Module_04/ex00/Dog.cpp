/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:19 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/23 09:47:57 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog default constructor activated" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructor activated" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this != &rhs)
        Animal::operator=(rhs); //call base class assignment operator
    std::cout << "Dog copy assignment operator activated" << std::endl;
    return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor activated" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}
