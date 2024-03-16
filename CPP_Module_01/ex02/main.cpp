/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:26:50 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/12 02:17:59 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*---------------------------------------------------------------------------------------------*\
program begins by initializing a string variable (str) with the value "HI THIS IS BRAIN".
it declares two additional variables: a pointer to a string (stringPTR) used to store memory
addresses of str and a reference to a string (stringREF) used to refer directly to str.
the program then prints the memory address of the string variable, stringPTR, and stringREF. Now
it prints the values of str, value pointed to by stringPTR, & the value referred to by stringREF.
This is all about the similarities & differences between pointers & references.
\*---------------------------------------------------------------------------------------------*/

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << std::endl;
	std::cout << "The memory address of the string variable str: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "The value of the string variable str: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}
