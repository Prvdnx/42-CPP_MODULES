/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:26:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/24 22:48:45 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : A_Animal()
{
	this->type = "CAT";
	std::cout << "Cat default constructor activated" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : A_Animal()
{
	std::cout << "Cat copy constructor activated" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type; //assign type member variable from base class
		delete this->brain; //delete existing Brain object
		this->brain = new Brain(*rhs.brain); //create a new Brain object & copy from rhs
	}
	std::cout << "Cat copy assignment operator activated" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor activated" << std::endl;
	delete this->brain;
}

void	Cat::makeSound() const
{
	std::cout << "\nMeow Meow\n\n" << std::endl;
}

void	Cat::think() const
{
	std::cout << "\n" << "CAT-THINK!!" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << brain->getIdea(i) << 1 + i << ' ';
	std::cout << std::endl;
}

Brain *Cat::getBrain()
{
	return (this->brain);
}
