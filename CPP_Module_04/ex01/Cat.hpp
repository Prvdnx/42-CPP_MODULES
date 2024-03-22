/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:26:52 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/22 05:59:34 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &other); // Copy constructor
		~Cat();
		void	makeSound() const;
		virtual void	think(void) const;
};

#endif
