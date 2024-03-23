/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Abt_Animal.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:26:16 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/23 10:10:29 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABT_ANIMAL_HPP
# define ABT_ANIMAL_HPP

# include <string>
# include <iostream>

class Abt_Animal
{
	protected:
		std::string type;
	public:
		Abt_Animal();
		Abt_Animal(const Abt_Animal &other); //copy constructor
		Abt_Animal &operator=(const Abt_Animal &rhs); //copy assignment operator
		virtual ~Abt_Animal();
		virtual void	makeSound() const = 0;
		std::string	getType() const;
};

#endif
