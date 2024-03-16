/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 07:53:32 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 09:04:26 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# define COLOR_GREEN   "\033[32m"

# include <iostream>
# include <string>

/*-------------------------------------Harl.hpp--------------------------------------*\
declaration of the Harl class. Harl class sums up behavior of a character named Harl
who expresses diff levels of complaints. Declares member functions 4 each complaint
level (debug, info, warning, error) & a function to handle complaints based on specific
complaint level.
\*-----------------------------------------------------------------------------------*/

class	Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		Harl();
		~Harl();
		void	complain(const std::string level);
};

#endif
