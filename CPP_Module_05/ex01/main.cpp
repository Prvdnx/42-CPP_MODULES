/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/28 00:32:05 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat alice("Alice", 1);
		// Bureaucrat alice("Alice", 50);	// cannot sign**
		Bureaucrat bob("Bob", 51);
		// Bureaucrat bob("Bob", -150);	// Exception

		Form form("Application Form", 20, 50);
		// Form form("New Application Form", -50, 150);	// Exception
		// Form form("New Application Form", 50, 30);	// cannot sign**

		std::cout << '\n' << alice << std::endl;
		std::cout << bob << '\n' << std::endl;
		
		std::cout << form << '\n' << std::endl;

		alice.signForm(form);
		std::cout << form << '\n' << std::endl;

		bob.signForm(form);
		std::cout << form << '\n' << std::endl;

		for (int i = 0; i < 35; i++)
			bob.incrementGrade();	// increment grade to be able to sign form

		form.beSigned(bob);
		std::cout << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << " =>> Exception caught: " << e.what() << '\n' << std::endl;
	}

	return (0);
}
