/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:51:47 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 03:29:18 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*------------------------------------main.cpp---------------------------------------*\
the main() function creates an instance of the Harl class named 'harl', then calls the
complain function of the 'harl' object 4 times, passing 4 diff strings (the complaint
levels), namely DEBUG, INFO, WARNING & ERROR to each call respectively. For each call,
corresponding complaint messages are displayed.
\*-----------------------------------------------------------------------------------*/
int main()
{
	std::cout << COLOR_GREEN << "\n👋 Hey its me, Harl!\n" << "\033[0m" << std::endl;
	
	Harl	harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	return (0);
}


// int	main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 	{
// 		std::cerr << "🚫Error, try this: " << argv[0] << " <complaint_level>" << std::endl;
// 		return (1);
// 	}

	// std::cout << COLOR_GREEN << "\n👋 Hey its me, Harl!\n" << "\033[0m" << std::endl;

// 	Harl	harl;
// 	harl.complain(argv[1]);

// 	return (0);
// }
