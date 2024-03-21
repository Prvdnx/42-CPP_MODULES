/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:45 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/22 02:31:43 by ookamonu         ###   ########.fr       */
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

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal *w = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();

    std::cout << w->getType() << " " << std::endl;
    std::cout << wc->getType() << " " << std::endl;

    w->makeSound();
    wc->makeSound();

    delete meta;
    delete i;
    delete j;
    delete w;
    delete wc;

    return (0);
}

