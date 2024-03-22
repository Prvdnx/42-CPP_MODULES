/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:19 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/22 07:46:19 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete (this->brain);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

void	Dog::think() const
{
    for (int i = 0; i < 100; i++)
        std::cout << brain->getIdea(i) << ' ';
    std::cout << std::endl;
}

Brain* Dog::getBrain()
{
	return (this->brain);
}