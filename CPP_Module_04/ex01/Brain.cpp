/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 04:43:13 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/22 07:48:58 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
        ideas[i] = "Thinking... ";
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	delete[] this->ideas;
}

std::string	Brain::getIdea(int index)
{
	return (this->ideas[index]);
}

void	Brain::setIdea(std::string idea, int index)
{
	this->ideas[index] = idea;
}
