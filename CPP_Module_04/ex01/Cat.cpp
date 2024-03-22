/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:26:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/22 20:38:05 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default constructor activated" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "Cat copy constructor activated" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}

Cat::~Cat()
{
	std::cout << "Cat destructor activated" << std::endl;
	delete this->brain;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

void	Cat::think() const
{
	std::cout << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << brain->getIdea(i) << 1 + i << ' ';
	std::cout << std::endl;
}
