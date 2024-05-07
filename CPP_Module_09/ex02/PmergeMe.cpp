/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 05:11:21 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/07 07:13:59 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PmergeMe.hpp"

PmergeMe::PmergeMe() : _vecTime(0.0), _deqTime(0.0) {}

PmergeMe::PmergeMe(char *argv[]) : _vecTime(0.0), _deqTime(0.0)
{
	_fillContainers(argv);
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		_vec = other._vec;
		_deq = other._deq;
		_vecTime = other._vecTime;
		_deqTime = other._deqTime;
	}
	return (*this);
}

std::vector<int> PmergeMe::getVector(void) const
{
	return (this->_vec);
}

std::deque<int>	PmergeMe::getDeque(void) const
{
	return (this->_deq);
}

void	PmergeMe::_fillContainers(char *argv[])
{
	for (int i = 0; argv[i]; i++)
	{
		int num = atoi(argv[i]);
		if (num <= 0)
			throw std::runtime_error("Error: Invalid input");
		_vec.push_back(num);
		_deq.push_back(num);
	}
}

void	PmergeMe::sortVector()
{
	clock_t start = clock();
	_mergeInsertionSortVector(0, _vec.size() - 1);
	_vecTime = (double)(clock() - start) / CLOCKS_PER_SEC;
}

void	PmergeMe::sortDeque()
{
	clock_t start = clock();
	_mergeInsertionSortDeque(0, _deq.size() - 1);
	_deqTime = (double)(clock() - start) / CLOCKS_PER_SEC;
}

void	PmergeMe::printVectorResult() const
{
	std::cout.precision(5);
	std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector: ";
	std::cout << std::fixed << _vecTime * 1000000 << " us" << std::endl;
}

void	PmergeMe::printDequeResult() const
{
	std::cout.precision(5);
	std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque: ";
	std::cout << std::fixed << _deqTime * 1000000 << " us" << std::endl;
}

void	PmergeMe::_mergeInsertionSortVector(int start, int end)
{
	if (start < end)
	{
		if (end - start <= 20)
		{
			for (int i = start + 1; i <= end; i++)
			{
				int key = _vec[i];
				int j = i - 1;
				while (j >= start && _vec[j] > key)
				{
					_vec[j + 1] = _vec[j];
					--j;
				}
				_vec[j + 1] = key;
			}
		}
		else
		{
			int mid = (start + end) / 2;
			_mergeInsertionSortVector(start, mid);
			_mergeInsertionSortVector(mid + 1, end);
			_merge(_vec, start, mid, end);
		}
	}
}

void	PmergeMe::_mergeInsertionSortDeque(int start, int end)
{
	if (start < end)
	{
		if (end - start <= 20)
		{
			for (int i = start + 1; i <= end; i++)
			{
				int key = _deq[i];
				int j = i - 1;
				while (j >= start && _deq[j] > key)
				{
					_deq[j + 1] = _deq[j];
					--j;
				}
				_deq[j + 1] = key;
			}
		}
		else
		{
			int mid = (start + end) / 2;
			_mergeInsertionSortDeque(start, mid);
			_mergeInsertionSortDeque(mid + 1, end);
			_merge(_deq, start, mid, end);
		}
	}
}

void	PmergeMe::_merge(std::vector<int> &arr, int start, int mid, int end)
{
	std::vector<int> temp(end - start + 1);
	int i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end)
		temp[k++] = arr[i] <= arr[j] ? arr[i++] : arr[j++];

	while (i <= mid)
		temp[k++] = arr[i++];

	while (j <= end)
		temp[k++] = arr[j++];

	std::copy(temp.begin(), temp.end(), arr.begin() + start);
}

void	PmergeMe::_merge(std::deque<int> &arr, int start, int mid, int end)
{
	std::deque<int> temp(end - start + 1);
	int i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end)
		temp[k++] = arr[i] <= arr[j] ? arr[i++] : arr[j++];

	while (i <= mid)
		temp[k++] = arr[i++];

	while (j <= end)
		temp[k++] = arr[j++];

	for (int l = 0; l < k; l++)
		arr[start + l] = temp[l];
}

// ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
// ./PmergeMe `jot -r 3000 1 100000 | tr "\n" " "`