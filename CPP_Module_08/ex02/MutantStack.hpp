/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:11:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/12 05:20:09 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack() {}
		MutantStack(const MutantStack<T>&) {}
		MutantStack<T> &operator=(const MutantStack<T>&) {}
		~MutantStack() {}

		iterator begin() { return std::stack<T>::c.begin(); }
		iterator end() { return std::stack<T>::c.end(); }
};

#endif
