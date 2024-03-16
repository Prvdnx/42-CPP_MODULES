/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:33:57 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/13 09:45:41 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#define COLOR_RED     "\033[31m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_YELLOW  "\033[33m"

/*------------------------------------Zombie.hpp-----------------------------------*\
declares the Zombie class, which represents a zombie entity & defines the class with
a default constructor, a parameterized constructor, a destructor, & two member
functions: announce() & giveName(). The announce() function prints the zombie's
announcement, while the giveName() function sets the name of the zombie.
\*---------------------------------------------------------------------------------*/

class Zombie
{
	private:
		std::string name_;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce();
		void giveName(std::string nm);
};

Zombie* zombieHorde(int N, std::string name);

#endif
