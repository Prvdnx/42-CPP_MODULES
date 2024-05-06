/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 05:13:25 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/06 03:27:34 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PMERGEME_HPP
#define	PMERGEME_HPP

#include	<vector>
#include	<deque>
#include	<ctime>
#include	<cstdlib>
#include	<iostream>

class	PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(int argc, char *argv[]);
		PmergeMe(const PmergeMe &src);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe &other);

		std::vector<int>	getVector(void) const;
		std::deque<int>		getDeque(void) const;
		
		void sortVector();
		void sortDeque();
		void printVectorResult() const;
		void printDequeResult() const;

	private:
		std::vector<int> _vec;
		std::deque<int> _deq;
		double _vecTime;
		double _deqTime;

		void _addNumbers(char **argv);
		void _mergeInsertionSortVector(int start, int end);
		void _mergeInsertionSortDeque(int start, int end);
		void _merge(std::vector<int>& arr, int start, int mid, int end);
		void _merge(std::deque<int>& arr, int start, int mid, int end);
};

#endif
