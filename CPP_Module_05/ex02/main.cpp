/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/02 20:52:59 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
//#include <cstdlib>

int main(int argc, char *argv[])
{
	if (argc == 2 && isdigit(argv[1][0]))
	{
		try
		{
			Bureaucrat b("Bob", atoi(argv[1]));				// create a Bureaucrat 
			ShrubberyCreationForm s("home");				// create a ShrubberyCreationForm with target "home"
			RobotomyRequestForm r("Robo_X42");				// create RobotomyRequestForm with target "Robo_X42"
			PresidentialPardonForm p("Rebel_President");	// create PresidentialPardonForm with target "Rebel_president"

			std::cout << b << std::endl;			// print Bureaucrat details
			std::cout << s << std::endl;			// print ShrubberyCreationForm details
			std::cout << r << std::endl;			// RobotomyRequestForm details
			std::cout << p << '\n' << std::endl;	// PresidentialPardonForm details

			b.signForm(s);					// Bureaucrat signs ShrubberyCreationForm
			std::cout << s << std::endl;	// print details
			b.executeForm(s);	// execute ShrubberyCreationForm

			b.signForm(r);
			std::cout << r << std::endl;
			b.executeForm(r);

			b.signForm(p);
			std::cout << p << std::endl;
			b.executeForm(p);

			// b.incrementGrade();	// increment to allow execution of president form
			// b.executeForm(p);	// execute
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl; // catch & print any exceptions that occurs
		}
	}
	else
		std::cerr << "Error: invalid arguments" << std::endl;
			
    return (0);
}
