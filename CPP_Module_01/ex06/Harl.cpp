/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:43:35 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 08:24:33 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*-------------------------------------Harl.cpp-------------------------------------*\
defines behavior of complaint levels (debug, info, warning, error) by providing the
output messages. Implements the complain() function, which takes a complaint level as
input & calls the appropriate complaint function based on the level. The complain()
function uses arrays to map complaint levels to their corresponding member functions.
\*----------------------------------------------------------------------------------*/
Harl::Harl(void){}

Harl::~Harl(void){}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

/*---------------------------------Harl::complain----------------------------------*\
complain() function is responsible for expressing complaints based on specified
complaint level represented by a string parameter 'level'.
Array 'sptr' of strings is created to store complaint levels in order DEBUG, INFO,
WARNING, & ERROR. An integer 'i' is initialised to 0 & enters a while loop to search
for position of the specified complaint level 'level' in the 'sptr' array. Continues
until 'i' reaches end of the array or the complaint level is found. If the complaint
level is found, the loop terminates, & 'i' holds its index. The switch statement
evaluates 'i' & calls the appropriate complaint function based on the index of the
complaint level in 'sptr' array. If 'i' is out of range of 'sptr' array indices, or a 
complaint level is not found, default case is executed, indicating the complaint level
is unrecognized/insignificant.
\*----------------------------------------------------------------------------------*/
void	Harl::complain(std::string level)
{
	std::string	sptr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	while (i < 4 && (sptr[i] != level))
		i++;
	
	switch (i)
	{
		case 0:
				Harl::debug();
		case 1:
				Harl::info();
		case 2:
				Harl::warning();
		case 3:
				Harl::error();
				break;
		default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
	}
}
