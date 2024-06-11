/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 04:21:13 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/12 05:17:28 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iostream>

Span::Span(unsigned int n): _N(n) {}

Span::~Span() {}

Span::Span(const Span &other): _N(other._N), _vec(other._vec) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_N = other._N;
		_vec = other._vec;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (_vec.size() >= _N)
		throw std::runtime_error("Cannot add a new element, span is full\n");
	_vec.push_back(n);
}

int	Span::longestSpan() const
{
	if (_vec.size() <= 1)
		throw std::runtime_error("No span can be detected\n");

	std::vector<int> sortedVec(_vec);
	std::sort(sortedVec.begin(), sortedVec.end());

	return (sortedVec.back() - sortedVec.front());
}

int	Span::shortestSpan() const
{
	if (_vec.size() <= 1)
		throw std::runtime_error("No span can be detected\n");

	std::vector<int> sortedVec(_vec);
	std::sort(sortedVec.begin(), sortedVec.end());

	int shortestSpan = sortedVec[1] - sortedVec[0];
	for (size_t i = 1; i < sortedVec.size() - 1; i++)
	{
		int currSpan = sortedVec[i + 1] - sortedVec[i];
		if (currSpan < shortestSpan)
			shortestSpan = currSpan;
	}
	return (shortestSpan);
}

void	Span::printData()
{
	std::cout << "\nData in Span: ";
	for (std::vector<int>::const_iterator it = _vec.begin(); it != _vec.end(); it++)
		std::cout << *it << " ";
}

void	Span::addRange(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	size_t rangeSize = std::distance(first, last);
	if (rangeSize > _N - _vec.size())
		throw std::runtime_error("Cannot bulk insert elements\n");
	for (; first != last; ++first)
		this->addNumber(*first); // access addNumber through Span obj
}
