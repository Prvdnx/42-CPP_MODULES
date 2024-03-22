/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:45 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/22 20:51:04 by ookamonu         ###   ########.fr       */
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
		t[i]->think();
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete t[i];
	std::cout << std::endl;
	
	Dog	basic;
	Dog copy = basic;
	for (int i = 0; i < 100; i++)
		basic.getBrain()->setIdea(" New_thought_", i);
			
	basic.think();
	std::cout << "\nInitial copy: " << copy.getBrain()->getIdea(0) << std::endl;
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
