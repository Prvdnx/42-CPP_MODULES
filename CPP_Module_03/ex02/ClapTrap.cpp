/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:00:55 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/20 06:02:01 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Constructor activated!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor activated for ClapTrap" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (hitPoints <= 0)
	{
		std::cout << name << " can't attack because the Modafuka is already destroyed!" << std::endl;
		return;
	}
	if (energyPoints > 0)
	{
		std::cout << name << " attacks " << target << ", causing " << attackDamage << " damage(s)!" << std::endl;
		energyPoints--;
		std::cout << name << " has " << energyPoints << " energy points left." << std::endl;
	}
	else
		std::cout << name << " has no energy points left to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << name << " is already a dead ass!" << std::endl;
		return;
	}
	hitPoints -= amount;
	if (hitPoints <= 0)
	{
		std::cout << name << " takes " << amount << " damage(s) and dies!" << std::endl;
	}
	else
		std::cout << name << " takes " << amount << " damage(s)! Remaining hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << name << " is dead and can't be repaired!" << std::endl;
		return;
	}
	hitPoints += amount;
	std::cout << name << " is repaired for " << amount << " hit points!" << std::endl;
	std::cout << name << " now has " << hitPoints << " hit points." << std::endl;
}
