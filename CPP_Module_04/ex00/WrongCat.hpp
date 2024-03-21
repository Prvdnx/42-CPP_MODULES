/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 01:28:22 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/22 02:31:16 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &other); // Copy constructor
	~WrongCat();
	void	makeSound() const;
};

# endif