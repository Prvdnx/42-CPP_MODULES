/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:19 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/24 02:04:02 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog default constructor activated" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog copy constructor activated" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type; //assign type member variable from the base class
		delete this->brain; //delete existing Brain object
		this->brain = new Brain(*rhs.brain); // Create new Brain object & copy from rhs
	}
	std::cout << "Dog copy assignment operator activated" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor activated" << std::endl;
	delete (this->brain);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

void	Dog::think() const
{
	std::cout << "\n" << "DOG-THINK!!" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << brain->getIdea(i) << 1 + i << ' ';
	std::cout << std::endl;
}

Brain *Dog::getBrain()
{
	return (this->brain);
}