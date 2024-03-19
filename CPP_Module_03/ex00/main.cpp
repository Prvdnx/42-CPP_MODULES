/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:00:48 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/20 04:34:17 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap    robot1("Robot1");
	ClapTrap    robot2("Robot2");

	robot1.attack("Robot2");  //Robot1 attacks Robot2
	robot2.takeDamage(5);     //Robot2 takes damage
	robot2.beRepaired(3);     //Robot1 is repaired
	robot2.attack("Robot1");  //Robot2 attacks Robot1
	robot1.takeDamage(12);    //Robot2 takes damage
	robot1.beRepaired(5);     //Robot2 is repaired

	return (0);
}
