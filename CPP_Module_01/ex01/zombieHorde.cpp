/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:23:24 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/11 09:17:56 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*----------------------------------ZombieHorde.cpp----------------------------------*\
defines the zombieHorde() function which is responsible for creating a horde of zombies
by dynamically allocating memory for an array of Zombie objects & initializing each
object with the specified name. It iterates through the array & calls the giveName()
function to set the name for each zombie and it returns a pointer to the first zombie
in the array.
\*-----------------------------------------------------------------------------------*/

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* Horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		Horde[i].giveName(name);
	}
	return (Horde);
}
