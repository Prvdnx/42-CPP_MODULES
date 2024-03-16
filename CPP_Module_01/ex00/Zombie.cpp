/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:34:06 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/11 00:54:55 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*----------------------------------Zombie.cpp----------------------------------*\
1. it defines constructor to initialize the name_ attribute of Zombie object with
   the value passed as name parameter
2. defines destructor to print message indicating destruction of the Zombie object
3. defines the announce() function to print the announcement message.
\*------------------------------------------------------------------------------*/

Zombie::Zombie(std::string name) : name_(name) {}

Zombie::~Zombie()
{
	std::cout << name_ << " destroyed!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
