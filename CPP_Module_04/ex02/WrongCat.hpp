/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:28:22 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/23 08:58:59 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &other); //copy constructor
	WrongCat &operator=(const WrongCat& rhs);
	~WrongCat();
	void	makeSound() const;
};

# endif
