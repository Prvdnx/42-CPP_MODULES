/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/27 02:39:08 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat alice("Alice", 1);
		Bureaucrat bob("Bob", 150);
		// Bureaucrat candice("Candice", -150);	// Exception

		std::cout << '\n' << alice << std::endl;
		std::cout << bob << std::endl;

		alice.decrementGrade();
		bob.incrementGrade();

		std::cout << '\n' << alice << std::endl;
		std::cout << bob << std::endl;

		// alice.incrementGrade();
		// alice.incrementGrade();	// Exception
		bob.decrementGrade();
		bob.decrementGrade();		// Exception
		
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "\nCaught GradeException: " << e.what() << '\n' << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "\nCaught GradeException: " << e.what() << '\n' << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
