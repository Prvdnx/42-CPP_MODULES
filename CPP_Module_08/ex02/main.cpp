/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/11 21:42:54 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main()
{
	MutantStack<int> mstack; // create mutantStack obj

	mstack.push(5); // push elements onto stack
	mstack.push(17);
	std::cout << "\nTop element of the stack: " << mstack.top() << std::endl; // top element of stack

	mstack.pop(); // pop an element from stack
	std::cout << "Size of the stack after popping: " << mstack.size() << std::endl; // print size of stack

	mstack.push(3); // push more elements onto stack
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Elements of the stack: "; // print elements of stack
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}

	std::stack<int> s(mstack); // create a standard stack using MutantStack
	std::cout << "\n\nCreated a standard stack using MutantStack" << std::endl;

	std::list<int> mlist; // create a list
	std::cout << "\nCreated a list" << std::endl;
	mlist.push_back(5);
	mlist.push_back(17);
	mlist.pop_back();
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::cout << "Elements of the list: "; // print elements of list
	std::list<int>::iterator it2 = mlist.begin();
	std::list<int>::iterator ite2 = mlist.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << " ";
		it2++;
	}
	std::cout << "\n\n";

	return (0);
}
