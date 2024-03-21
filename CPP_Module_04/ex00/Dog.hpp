/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:27:33 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/22 02:34:38 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"
# include <iostream>

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &other); // Copy constructor
		~Dog();
		void	makeSound() const;
};

#endif
