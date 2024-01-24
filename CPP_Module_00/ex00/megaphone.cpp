/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:19:07 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/25 00:49:16 by ookamonu         ###   ########.fr       */
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
			i + 1 >= argc ? std::cout << std::endl : std::cout << "";
		}
	}
	return (0);
}



/* // The 'upper' function, takes a string 'str' as input & converts it to uppercase using std::toupper.
// It iterates through each character of the string & transforms it to its uppercase equivalent.
// The modified string is then returned.
std::string upper(std::string str)
{
	// Iterate through each character of the string.
	for (unsigned int i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]); // Transform each character to its uppercase equivalent.
	return (str); // Return the modified string.
}

// 'main' function is the entry point of the program, it takes command-line arguments 'argc' & 'argv'.
int main(int argc, char **argv)
{
	if (argc == 1) // Check if there are no additional command-line arguments.
    {
		// If no arguments are provided, output a specific message indicating loud and unbearable feedback noise.
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
    { // If command-line arguments are present, iterate through each argument starting from index 1.
		for (int i = 1; i < argc; i++)
        {
			// Output the uppercase version of the current argument using the 'upper' function.
			std::cout << upper(argv[i]);
			// If this is the last argument, print a newline character; otherwise, print an empty string.
			i + 1 >= argc ? std::cout << std::endl : std::cout << "";
		}
	}
	return (0); // The 'main' function returns 0 to indicate successful execution.
} */
