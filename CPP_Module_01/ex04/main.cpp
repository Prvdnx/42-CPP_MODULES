/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 09:57:59 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 03:43:09 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rep.hpp"

/*---------------------------------------main.cpp--------------------------------------*\
first it checks if the correct number of command-line arguments are provided; if not, it
prints an error message. If correct number of args are provided, the program creates an
instance of the Replace class & invokes its replace() function with the provided input
filename, string to be replaced, & replacement string. If replacement is successful, it
prints a success message; else it prints an error message.
\*-------------------------------------------------------------------------------------*/

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Incorrect Arguments!🚫\nTry this: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    Replace myReplacer;
    if (!myReplacer.replace(argv[1], argv[2], argv[3])) //string replacement
    {
        return (1);
    }

    std::cout << COLOR_GREEN << "Replacement Successful !!! ✅" << std::endl;

    return (0);
}
