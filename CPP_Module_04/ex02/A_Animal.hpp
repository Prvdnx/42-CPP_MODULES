/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:26:16 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/24 23:17:05 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

# include <string>
# include <iostream>

class A_Animal
{
	protected:
		std::string type;
	public:
		A_Animal();
		A_Animal(const A_Animal &other); //copy constructor
		A_Animal &operator=(const A_Animal &other); //copy assignment operator
		virtual ~A_Animal();
		virtual void	makeSound() const = 0;
		std::string	getType() const;
};

#endif
