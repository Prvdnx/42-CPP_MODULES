/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:33:57 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/11 01:17:02 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

/*------------------------------------Zombie.hpp-----------------------------------*\
Zombie class declared & defined with a private member variable `name_` of type string
and public members;
  - Constructor that initializes `name_` with the given name as defined in Zombie.cpp
  - destructor that prints a message indicating the destruction of the Zombie object
  as defined in Zombie.cpp
  - announce() function that prints the name of the Zombie along with a message as
  defined in Zombie.cpp
Declaration of newZombie function responsible for creating new Zombie object and
randomChump responsible for creating a local Zombie object
\*---------------------------------------------------------------------------------*/

class Zombie
{
	private:
		std::string	name_;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
