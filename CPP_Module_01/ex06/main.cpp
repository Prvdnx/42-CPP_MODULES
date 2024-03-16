/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:51:47 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 07:55:53 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*------------------------------------main.cpp---------------------------------------*\
checks number of command line arguments entered & prints error message if not correct.
Else it creates an instance of the Harl class named 'harl', then calls the complain()
function of the 'harl' object which then displays complaint message or messages.
\*-----------------------------------------------------------------------------------*/

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "🚫Error, try this: " << argv[0] << " <complaint_level>" << std::endl;
		return (1);
	}

	std::cout << COLOR_GREEN << "\n👋 Hey its me, Harl!\n" << "\033[0m" << std::endl;

	Harl	harl;
	
	harl.complain(argv[1]);

	return (0);
}
