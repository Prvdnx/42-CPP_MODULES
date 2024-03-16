/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rep.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:38:46 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 03:46:07 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rep.hpp"

/*-----------------------------------Replace::replace---------------------------------*\
replace() function is responsible for replacing occurrences of a substring 's1' with
substring 's2' in the contents of a given input file. It takes 'filename' (name of the
input file), 's1' (substring to be replaced), & 's2' (substring to replace with).
--> tries to open the input file specified by the 'filename' parameter using ifstream.
Display error message if input file can't be opened, & return (false) for failure.
--> tries to create an output file. If input file was successfully opened, the function
goes 2 create output file with name '<filename>.replace' using ofstream. Display error
message if output file cannot be created, & return (false) for failure.
--> it reads the input file contents line by line into 'line' variable using getline().
String replacement is performed for each line read from the input file.
  - Function searches for occurrences of substring 's1' within each line of the input
  file using find(). If 's1' is found in the line, it is replaced with substring 's2'
  To replace, substr() is used to extract portions of the line be4 & after 's1', and
  then concatenates these portions puting 's2' in btw. The position 'pos' is updated by
  adding strlength of 's2' to it, to continue search for other occurrences of 's1' and
  this continues until all occurrences of 's1' in the line have been replaced.
  - After replacing all occurrences of 's1' in the current line, the modified line is
  written to the output file using the << operator of the ofstream.
--> The input and output file streams are closed after all lines have been processed
--> The function returns true if the replacement process is successful.
\*-----------------------------------------------------------------------------------*/
bool Replace::replace(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::ifstream inputFile(filename.c_str()); //open input file
	if (!inputFile)
	{
		std::cerr << "Error🚫: input file could not open" << std::endl;
		return (false);
	}

	std::string outFileName = filename + ".replace";
	std::ofstream outputFile(outFileName.c_str()); //create output file
	if (!outputFile)
	{
		std::cerr << "Error🚫: output file could not be created" << std::endl;
		return (false);
	}

	std::string line;
	while (std::getline(inputFile, line)) //replace strings
	{
		size_t	pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
        outputFile << line << "\n"; //to output file
	}

    inputFile.close();
    outputFile.close();

	return (true);
}
