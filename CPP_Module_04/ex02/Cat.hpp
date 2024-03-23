/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:26:52 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/23 10:11:47 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Abt_Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat: public Abt_Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &other); //copy constructor
		Cat &operator=(const Cat &rhs); //copy assignment operator
		~Cat();
		void	makeSound() const;
		virtual void	think(void) const;
};

#endif
