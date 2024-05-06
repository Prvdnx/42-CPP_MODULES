/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:55:06 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/07 03:13:30 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	RPN_HPP
#define	RPN_HPP

#include	<stack>
#include	<string>

class	RPN
{
	private:
		std::stack<int> _stack;

	public:
		RPN();
		RPN(const RPN &name);
		RPN &operator=(const RPN &other);
		~RPN();

		void	parse(const std::string &input);
		void	operate();
};

#endif
