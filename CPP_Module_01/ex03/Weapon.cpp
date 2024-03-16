/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:42:37 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 10:36:45 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*-------------------------------------Weapon.cpp------------------------------------*\
defines the behavior of the Weapon class; the constructor, destructor, getter, & setter
functions for the 'type' attribute. The class encapsulates the behavior of a weapon by
providing methods to get & set its type.
\*-----------------------------------------------------------------------------------*/

Weapon::Weapon(std::string type) : type_(type) {}

Weapon::~Weapon() {}

const   std::string &Weapon::getType() const
{
    return (type_);
}

void    Weapon::setType(std::string type)
{
    type_ = type;
}