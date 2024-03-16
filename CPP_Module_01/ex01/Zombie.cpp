/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:34:06 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/11 09:08:52 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*------------------------------------Zombie.cpp-------------------------------------*\
implements member functions of the Zombie class declared in Zombie.hpp.
Defines the behavior of the Constructor which initializes a Zombie object with a given
name, the Destructor which prints a message when a Zombie object is destroyed,
The announce() function which prints the zombie's name and the announcement, 
The giveName() function which sets the name of the zombie.
\*-----------------------------------------------------------------------------------*/

Zombie::Zombie() {}
Zombie::Zombie(std::string name) : name_(name) {}

int	numCreated = 1;
int	numDestroyed = 1;
Zombie::~Zombie()
{
	std::cout << COLOR_RED << name_ << " " << numDestroyed++ << " : destroyed!" << std::endl;
}

void	Zombie::giveName(std::string nm)
{
	name_ = nm;
}

void	Zombie::announce()
{
	std::cout << COLOR_LEMON << name_ << " " << numCreated++ << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
