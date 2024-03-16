/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:43:53 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 11:05:19 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*--------------------------------------HumanA.cpp------------------------------------*\
defines the behavior of the HumanA class; the constructor & attack() function. The
constructor initializes a HumanA object with a name & a reference to a Weapon object.
attack() prints a message showing name of the human & type of weapon they are using to
attack. It is encapsulation, the class maintains integrity of its data & behavior
within a single unit.
\*------------------------------------------------------------------------------------*/

HumanA::HumanA(std::string name, const Weapon& weapon) : name_(name), weapon_(weapon) {}

HumanA::~HumanA() {}

void    HumanA::attack() const
{
    std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}

