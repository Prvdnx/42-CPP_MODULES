/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:34:23 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/11 05:01:49 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*------------------------------------main-------------------------------------*\
the program creates a Zombie object named "Foo" using dynamic memory allocation,
prints its announcement, deallocates the memory, generates a random Zombie object
with a random name, and prints its announcement. The dynamic memory allocation
ensures that the Zombie objects' lifetimes extend beyond the scope of their
creation functions, allowing them to be used throughout the program
\*-----------------------------------------------------------------------------*/

int main()
{
	Zombie* zombie = newZombie("Foo");
	zombie->announce();
	delete zombie;
                                                                                                                                                                                                                                                                                                                     
	randomChump("RandomZombie");

	return (0);
}
