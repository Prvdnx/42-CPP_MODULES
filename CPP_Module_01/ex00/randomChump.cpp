/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:34:12 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/11 04:49:29 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// #include <cstdlib>
// #include <ctime>

/*---------------------------------randomChump---------------------------------*\
the randomChump function creates a local Zombie object with the given name and
calls the announce function to print its announcement.
\*-----------------------------------------------------------------------------*/

void	randomChump(std::string name)
{
    // std::cout << "seed value: " << static_cast<unsigned int>(time(NULL)) << std::endl;
	// srand(static_cast<unsigned int>(time(NULL)));
	
	Zombie	zombie(name);
	zombie.announce();
}
