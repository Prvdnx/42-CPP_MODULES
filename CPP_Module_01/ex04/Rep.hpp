/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rep.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 01:39:31 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/12 06:30:50 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
//#include <string>
#define COLOR_GREEN   "\033[32m"

/*----------------------------------------Rep.hpp-------------------------------------*\
declares Replace class, which is responsible for replacing occurrences of a substring
in a file with another substring. Defines the Replace class with a single public member
function: replace() which takes three parameters: input filename, the string to be
replaced (s1), and the replacement string (s2); it returns a boolean value indicating
whether replacement was successful or not.
\*------------------------------------------------------------------------------------*/

class Replace
{
    public:
        bool replace(const std::string &filename, const std::string &s1, const std::string &s2);
};

#endif
