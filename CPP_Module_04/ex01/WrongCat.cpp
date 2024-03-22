/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:28:12 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/22 20:42:11 by ookamonu         ###   ########.fr       */
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

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor activated" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong meow meow" << std::endl;
}
