/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:00:48 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/20 07:02:46 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap claptrap("Dark Knight");
	ScavTrap scavtrap("Scavenger");
	FragTrap fragtrap("Fragger");

	scavtrap.guardGate();
	claptrap.attack("Scavenger");
	scavtrap.takeDamage(0);
	scavtrap.beRepaired(5);
	fragtrap.highFivesGuys();
	fragtrap.attack("Scavenger");
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(5);
	scavtrap.attack("Fragger");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(5);
	fragtrap.highFivesGuys();
	fragtrap.attack("Scavenger");
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(5);
	scavtrap.attack("Fragger");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(5);
	fragtrap.attack("Scavenger");
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(5);
	scavtrap.attack("Fragger");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(5);
	fragtrap.attack("Scavenger");
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(5);
	fragtrap.highFivesGuys();
	scavtrap.guardGate();
	return (0);
}
