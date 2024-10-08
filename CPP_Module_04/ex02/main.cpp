/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:45 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/25 01:10:50 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "A_Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main()
{
	const A_Animal *j = new Dog();
	const A_Animal *i = new Cat();
	delete j; //should not create a leak
	delete i;

	std::cout << std::endl;
	const A_Animal *t[4];
	for (int i = 0; i < 2; i++)
		t[i] = new Dog();
	for (int i = 2; i < 4; i++)
		t[i] = new Cat();
	for (int i = 0; i < 4; i++)
	{
    	std::cout << "\n" << t[i]->getType() << std::endl;
		t[i]->makeSound(); 	//enforce makeSound() on object as implemented in each derived class
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete t[i];
	std::cout << std::endl;

	Dog	dog1;
	Dog dog2 = dog1;
	Dog copy;
	copy = dog1;
	for (int i = 0; i < 100; i++)
		dog1.getBrain()->setIdea(" New_thought_", i); //modify brain idea	
	dog1.think();
	
	std::cout << "\nInitial brain idea copy: " << copy.getBrain()->getIdea(0) << std::endl; //check brain copy idea
	std::cout << std::endl;

	return (0);
}
