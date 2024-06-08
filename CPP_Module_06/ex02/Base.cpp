/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:13:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/08 20:47:38 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate()
{
	int randomNum = rand() % 3;
	std::cout << "\nRandom number: " << randomNum;
	switch (randomNum)
	{
		case (0):
			return new A();
		case (1):
			return new B();
		default:
			return new C();
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "type C" << std::endl;
	else
		std::cout << "Object type Unknown!" << std::endl;
}

void	identify(Base &p)
{
	identify(&p); // use first version of identify
}
