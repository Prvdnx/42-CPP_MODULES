/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:26:52 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/24 22:11:35 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "A_Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat: public A_Animal
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
		Brain *getBrain();
};

#endif
