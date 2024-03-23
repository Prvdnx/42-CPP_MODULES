/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:33 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/23 08:48:04 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &other); //copy constructor
	    Dog &operator=(const Dog &rhs); //copy assignment operator
		~Dog();
		void	makeSound() const;
	private:
};

#endif
