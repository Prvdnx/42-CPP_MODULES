/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:28:12 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/23 09:48:13 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor activated" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor activated" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    if (this != &rhs)
        WrongAnimal::operator=(rhs); //call base class assignment operator
    std::cout << "WrongCat copy assignment operator activated" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor activated" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong meow meow" << std::endl;
}
