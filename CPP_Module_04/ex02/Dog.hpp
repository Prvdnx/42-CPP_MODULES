/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:33 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/23 10:12:44 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Abt_Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog: public Abt_Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &other); //Copy constructor
	    Dog &operator=(const Dog &rhs); //copy assignment operator
		~Dog();
		void	makeSound() const;
		virtual void	think(void) const;
		Brain* getBrain();
};

#endif
