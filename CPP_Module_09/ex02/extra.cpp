
/*
// .hpp
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <iostream>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(int argc, char **argv);
		PmergeMe(const PmergeMe& src);
		~PmergeMe();

		PmergeMe& operator=(const PmergeMe& rhs);

		template<typename Container>
		void sort();

		template<typename Container>
		Container getSequence() const;

		template<typename Container>
		void printResult() const;

	private:
		std::vector<int> _vec;
		std::deque<int> _deq;
		double _vecTime;
		double _deqTime;

		void _addNumbers(char **argv);
		template<typename Container>
		void _mergeInsertionSort(Container& arr, int start, int end);
		template<typename Container>
		void _merge(Container& arr, int start, int mid, int end);
};

#endif



// .cpp
#include	"PmergeMe.hpp"

PmergeMe::PmergeMe() : _vecTime(0.0), _deqTime(0.0) {}

PmergeMe::PmergeMe(int argc, char **argv) : _vecTime(0.0), _deqTime(0.0)
{
    argv[argc] = NULL;
    _addNumbers(argv + 1);
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

void	PmergeMe::_addNumbers(char **argv)
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

template<typename Container>
void	PmergeMe::sort()
{
    clock_t	start;

    if (typeid(Container) == typeid(std::vector<int>))
    {
        start = clock();
        _mergeInsertionSort(_vec, 0, _vec.size() - 1);
        _vecTime = (double)(clock() - start) / CLOCKS_PER_SEC;
    }
    else if (typeid(Container) == typeid(std::deque<int>))
    {
        start = clock();
        _mergeInsertionSort(_deq, 0, _deq.size() - 1);
        _deqTime = (double)(clock() - start) / CLOCKS_PER_SEC;
    }
}

template<typename Container>
Container PmergeMe::getSequence() const
{
    if (typeid(Container) == typeid(std::vector<int>)) {
        return _vec;
    } else {
        return _deq;
    }
}

template<typename Container>
void PmergeMe::printResult() const
{
    std::cout.precision(6);
    std::cout << "Time to process a range of " << (typeid(Container) == typeid(std::vector<int>) ? _vec.size() : _deq.size());
    std::cout << " elements with " << (typeid(Container) == typeid(std::vector<int>) ? "std::vector" : "std::deque") << ": ";
    std::cout << std::fixed << (typeid(Container) == typeid(std::vector<int>) ? _vecTime : _deqTime) * 1000000 << " us" << std::endl;
}

template<typename Container>
void	PmergeMe::_mergeInsertionSort(Container& arr, int start, int end)
{
    if (start < end)
    {
        if (end - start <= 20)
        {
            for (int i = start + 1; i <= end; ++i)
            {
                int key = arr[i];
                int j = i - 1;
                while (j >= start && arr[j] > key)
                {
                    arr[j + 1] = arr[j];
                    --j;
                }
                arr[j + 1] = key;
            }
        }
        else
        {
            int mid = start + (end - start) / 2;
            _mergeInsertionSort(arr, start, mid);
            _mergeInsertionSort(arr, mid + 1, end);
            _merge(arr, start, mid, end);
        }
    }
}

template<typename Container>
void	PmergeMe::_merge(Container& arr, int start, int mid, int end)
{
    Container temp(end - start + 1);
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



// main.cpp
#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error: Invalid arguments\n";
        return 1;
    }
    
    PmergeMe sorter(argc, argv);
    
    // Display unsorted sequence
    std::cout << "Before: ";
    std::vector<int> vtr = sorter.getSequence<std::vector<int> >();
    for (size_t i = 0; i < vtr.size(); ++i) {
        std::cout << vtr[i] << " ";
    }
    std::cout << std::endl;
    
    // Sort and display sorted sequence for std::vector
    sorter.sort<std::vector<int> >();
    std::cout << "After: ";
    vtr = sorter.getSequence<std::vector<int> >();
    for (size_t i = 0; i < vtr.size(); ++i) {
        std::cout << vtr[i] << " ";
    }
    std::cout << std::endl;
    
    // Display time taken for sorting using std::vector
	sorter.printResult<std::vector<int> >();
    
    return 0;
}


// int main(int argc, char **argv)
// {
//     if (argc < 2)
// 	{
//         std::cerr << "Error: Insufficient arguments" << std::endl;
//         return (1);
//     }

//     try
// 	{
//         PmergeMe sorter(argc, argv);

//         std::cout << "Before: ";
//         std::cout << sorter.getSequence<std::vector<int> >() << std::endl;

//         sorter.sort<std::vector<int>>();

//         std::cout << "After: ";
//         std::cout << sorter.getSequence<std::vector<int> >() << std::endl;

//         sorter.printResult<std::vector<int> >();
//     }
// 	catch (const std::exception &ex)
// 	{
//         std::cerr << ex.what() << std::endl;
//         return (1);
//     }

//     return (0);
// }
*/
