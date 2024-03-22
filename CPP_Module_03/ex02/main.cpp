/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:00:48 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/21 03:16:44 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap claptrap("Dark_Knight");
	ScavTrap scavtrap("Junkyard_Guardian");
	FragTrap fragtrap("Lord_Zoro");

	std::cout << std::endl;
	scavtrap.guardGate();
	claptrap.attack("Junkyard_Guardian");
	scavtrap.takeDamage(0);
	scavtrap.beRepaired(5);
	fragtrap.highFivesGuys();
	fragtrap.attack("Junkyard_Guardian");
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(5);
	scavtrap.attack("Lord_Zoro");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(5);
	fragtrap.highFivesGuys();
	fragtrap.attack("Junkyard_Guardian");
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(5);
	scavtrap.attack("Lord_Zoro");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(5);
	fragtrap.attack("Junkyard_Guardian");
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(5);
	scavtrap.attack("Lord_Zoro");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(5);
	fragtrap.attack("Junkyard_Guardian");
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(5);
	fragtrap.highFivesGuys();
	scavtrap.guardGate();
	std::cout << std::endl;

	return (0);
}
