/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:45 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/25 01:21:16 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j; //should not create a leak
	delete i;

	std::cout << std::endl;
	const Animal *t[4];
	for (int i = 0; i < 2; i++)
		t[i] = new Dog();
	for (int i = 2; i < 4; i++)
		t[i] = new Cat();
	for (int i = 0; i < 4; i++)
	{	
    	std::cout << "\n" << t[i]->getType() << std::endl; //calls getType() on each object
		t[i]->think(); //calls think() on each object as implemented in it's derived class
		t[i]->makeSound(); //calls makeSound() on each object as implemented in it's derived class
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


// int	main()
// {
// 	Dog dog; //create Dog object

// 	dog.getBrain()->setIdea("New idea for dog", 0); //set idea for original object
// 	Dog dogCopy = dog; //create copies of the original object
// 	dog.getBrain()->setIdea("New ///=//=/// dog", 0); //modify original object

// 	std::cout << "Dog copy's idea: " << dogCopy.getBrain()->getIdea(0) << std::endl;
// 	//check if modifications to original object affect copies (if copies are shallow or deep)
// 	return (0);
// }
