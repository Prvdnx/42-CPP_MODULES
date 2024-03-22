/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:26:16 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/22 04:58:40 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other); //Copy constructor
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string	getType() const;
		virtual void	think() const; //member function to simulate thinking
};

#endif
