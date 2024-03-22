/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:00:48 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/20 06:50:13 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap claptrap2("Crimson_Blade");
	ScavTrap scavtrap2("Junkyard_Demon");

	scavtrap2.guardGate();
	claptrap2.attack("Junkyard_Demon");
	scavtrap2.takeDamage(10);
	scavtrap2.beRepaired(8);
	scavtrap2.attack("Crimson_Blade");
	claptrap2.takeDamage(15);
	claptrap2.beRepaired(3);
	scavtrap2.guardGate();
	std::cout << std::endl;
	
	ClapTrap claptrap("Da_Menace");
	ScavTrap scavtrap("The_Punisher");

	scavtrap.guardGate();
	claptrap.attack("The_Punisher");
	scavtrap.takeDamage(6);
	scavtrap.beRepaired(5);
	scavtrap.attack("Da_Menace");
	claptrap.takeDamage(20);
	claptrap.beRepaired(5);
	scavtrap.guardGate();
	std::cout << std::endl;

	return (0);
}
