/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:42:58 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 10:22:22 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*-----------------------------------------HumanB.cpp---------------------------------------*\
defines behavior of HumanB class, (a human character with a name & optional Weapon object).
A constructor to initialize a HumanB object with a name & methods to set the Weapon object &
to perform an attack. The attack() function prints a message indicating name of the human &
type of weapon they are using to attack, or indicates if the human is attacking unarmed.
Weapon objects are optional, the class has a little flexibilty
\*------------------------------------------------------------------------------------------*/

HumanB::HumanB(std::string name) : name_(name), weapon_(NULL) {}

HumanB::~HumanB() {}

void    HumanB::setWeapon(const Weapon &weapon)
{
    weapon_ = &weapon;
}

void    HumanB::attack() const
{
    if (weapon_)
        std::cout << name_ << " attacks with their " << weapon_->getType() << std::endl;
    else
        std::cout << name_ << " attacks unarmed" << std::endl;
}
