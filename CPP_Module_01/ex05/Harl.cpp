/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:43:35 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 07:24:05 by ookamonu         ###   ########.fr       */
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
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info()
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning()
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error()
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

/*---------------------------------Harl::complain----------------------------------*\
complain() function takes a single parameter, a string for complaint level. Inside
the function, 2 arrays, ptr & sptr are defined.
- ptr array stores pointers to member functions of the Harl class complaint levels.
- sptr array stores strings for complaint levels in same order as the member funcs.
the function iterates over sptr array using for loop & each iteration compares the
current complaint level with the input complaint level parameter.
If current complaint level in sptr matches the input level, the corresponding member
function pointer from ptr array is dereferenced & called using (this->*ptr[i])().
After calling the member function, the function exits the loop using the break;. If
no match was found after the iteration, complain() function exits without performing
any action.
\*----------------------------------------------------------------------------------*/
void	Harl::complain(std::string level)
{
	void	(Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	sptr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (sptr[i] == level)
		{
			(this->*ptr[i])();
			break;
		}
	}
}
