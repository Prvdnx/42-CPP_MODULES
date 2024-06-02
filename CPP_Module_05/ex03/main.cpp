/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/03 03:46:12 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2 && isdigit(argv[1][0]))
	{
		try
		{
			Bureaucrat b("Bob", atoi(argv[1]));
			Intern someRandomIntern;

			AForm *s = someRandomIntern.makeForm("shrubbery creation", "garden");	// create forms using Intern
			AForm *r = someRandomIntern.makeForm("robotomy request", "Robo_X42");
			AForm *p = someRandomIntern.makeForm("presidential pardon", "Rebel_President");

			if (s || r || p) // check if forms were created successfully
			{
				std::cout << *s << std::endl;
				std::cout << *r << std::endl;
				std::cout << *p << std::endl;

				b.signForm(*s);	// sign & execute forms
				b.executeForm(*s);
				b.signForm(*r);
				b.executeForm(*r);
				b.signForm(*p);
				b.executeForm(*p);

				delete (s); // free memory
				delete (r);
				delete (p);
			}
			else
				std::cerr << "Error: Failed to create forms\n";
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Error: invalid arguments" << std::endl;

	return (0);
}
