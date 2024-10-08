/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 04:44:53 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/24 23:16:32 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string *ideas;
	public:
		Brain();
		Brain(const Brain &other); //copy constructor
		Brain &operator=(Brain &other);
		~Brain();
		std::string	getIdea(int index);
		void    setIdea(std::string idea, int index);
};

#endif
