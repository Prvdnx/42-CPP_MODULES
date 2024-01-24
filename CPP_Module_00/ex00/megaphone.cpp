/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:19:07 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/25 01:54:16 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // includes the input/output stream header for using standard I/O functions.
#include <string> // includes the string header for string manipulation functions.

std::string upper(std::string str)
{
	for (unsigned int i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
    {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
    {
		for (int i = 1; i < argc; i++)
        {
			std::cout << upper(argv[i]);
			//i + 1 >= argc ? std::cout << std::endl : std::cout << "";
		}
        std::cout << std::endl;
	}
	return (0);
}


/*
std::string upper(std::string str) // This line defines a function named 'upper' that takes a string parameter 'str' and returns a string.
{
	for (unsigned int i = 0; i < str.length(); i++) // This initiates a for loop to iterate through each character in the string.
// It is used for transforming each character in the string to its uppercase equivalent.
		str[i] = std::toupper(str[i]); // This line converts the current character in the string to its uppercase equivalent.
// It ensures that each character in the string is transformed to uppercase.
	return (str); // This line returns the modified string after all characters have been transformed to uppercase.
// It is necessary for providing the result of the uppercase transformation to the caller.
}

int main(int argc, char **argv) // This line defines the main function with command line arguments 'argc' & 'argv'.
{
	if (argc == 1) // This checks if there is only one command line argument (the program name).
    // It is used to determine whether to display a specific message in case of insufficient arguments.
    {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; // This line outputs a message to the console when there is only one argument.
        // It generates a message indicating a loud and unbearable feedback noise.
	}
	else // This is the 'else' block for the condition when there is more than one command line argument.
    {
		for (int i = 1; i < argc; i++) // This initiates a for loop to iterate through each command line argument.
        // It is used to process and transform each argument.
        {
			std::cout << upper(argv[i]); // This line outputs the uppercase transformation of the current command line argument to the console.
        // It utilizes the 'upper' function defined earlier for transforming the argument to uppercase.
			// i + 1 >= argc ? std::cout << std::endl : std::cout << ""; // This line outputs either a newline or an empty string based on the condition.
    // It is used to control the formatting of the output, ensuring proper separation of transformed arguments.
		}
        std::cout << std::endl;    
	}
	return (0); // This line returns 0 to indicate successful execution of the program.
// It is necessary for providing an exit status to the operating system.
} */
