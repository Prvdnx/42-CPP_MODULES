/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:24:09 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/11 09:21:40 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*-------------------------------------main.cpp--------------------------------------*\
the program first creates a horde of zombies named "Mike" using zombieHorde(), prints
the announcement of each zombie in the horde & deallocates the memory. Then it creates
another horde of zombies named "Philip", prints their announcements & deallocates the
memory.
Dynamic memory allocation ensures that Zombie objects' lifetimes extend beyond the scope
of their creation functions, allowing them to be used throughout the program.
\*-----------------------------------------------------------------------------------*/

int   main()
{
	const int   num = 8;
	Zombie   *Horde = zombieHorde(num, "Alpha");

   std::cout << std::endl;
	for (int i = 0; i < num; ++i)
	{
		Horde[i].announce();
	}

	std::cout << std::endl;
	delete[] Horde;
	std::cout << std::endl;

	// Zombie* Horde2 = zombieHorde(2, "Philip");
	// for (int i = 0; i < 2; ++i)
	// {
	// 	Horde2[i].announce();
	// }
	// delete[] Horde2;

	return (0);
}


/*
ex01 involves creating a program that simulates a horde of zombies.
Flow of the program:

1. **Zombie Class**:
   - We start by defining a class called Zombie, which represents a single zombie entity.
   - This class has attributes such as a name and behaviors such as announcing itself.
   - The Zombie class also includes a constructor to initialize a zombie with a name, a
   destructor to handle cleanup when a zombie is destroyed, and methods to set the name
   of a zombie and announce itself.

2. **zombieHorde Function**:
   - Next, we implement a function called zombieHorde.
   - This function takes two parameters: the number of zombies to create (N) and the name
   to assign to each zombie.
   - Inside this function, we dynamically allocate memory for an array of Zombie objects
   to create the horde.
   - We then iterate over each zombie in the array and assign the specified name using
   the giveName method.
   - Finally, we return a pointer to the first zombie in the array.

3. **Main Function**:
   - In the main function, we demonstrate the usage of the Zombie class and the zombieHorde
   function.
   - We create two hordes of zombies: one named "Mike" and the other named "Philip".
   - For each horde, we print the announcement of each zombie to the console using the
   announce method.
   - After printing the announcements, we deallocate the memory allocated for each horde
   to avoid memory leaks.

Overall, the flow involves creating a horde of zombies, assigning names to them, printing
their announcements, and properly managing memory allocation to ensure efficient resource
usage.
*/