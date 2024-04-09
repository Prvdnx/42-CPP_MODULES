/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:45 by ookamonu          #+#    #+#             */
/*   Updated: 2024/04/10 04:18:41 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << "\n" << j->getType() << " " << std::endl;
    std::cout << i->getType() << " \n" << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    std::cout << std::endl;
    meta->makeSound();
    std::cout << std::endl;

    const WrongAnimal *w = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();
    std::cout << std::endl;

    std::cout << w->getType() << " " << std::endl;
    std::cout << wc->getType() << " " << std::endl;
    std::cout << std::endl;

    w->makeSound();
    wc->makeSound(); 
    std::cout << std::endl;

    //testing copy constructors & copy assignment operators
    Dog dog1;
    Dog dog2 = dog1;
    Dog dog3;
    dog3 = dog1;
    std::cout << std::endl;

    Cat cat1;
    Cat cat2 = cat1;
    Cat cat3;
    cat3 = cat1;
    std::cout << std::endl;

    WrongCat wrongCat1;
    WrongCat wrongCat2 = wrongCat1;
    WrongCat wrongCat3;
    wrongCat3 = wrongCat1;
    std::cout << std::endl;


    delete meta;
    delete i;
    delete j;
    delete w;
    delete wc;

    return (0);
}

