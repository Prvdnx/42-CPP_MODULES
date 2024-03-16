/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 05:34:15 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/09 02:23:12 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*---------------------------------newZombie---------------------------------*\
the newZombie function creates a new Zombie object dynamically and returns a
pointer to the created Zombie with the given name.
\*---------------------------------------------------------------------------*/

Zombie  *newZombie(std::string name)
{
    return new Zombie(name);
}
