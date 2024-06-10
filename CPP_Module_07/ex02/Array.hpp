/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:11:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/10 22:14:31 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
//#include <stdexcept>

template <typename T>
class	Array
{
	private:
		T	*elements;
		unsigned int size_;

	public:
		Array() : elements(NULL), size_(0) {}
		
		Array(unsigned int n) : size_(n)
		{
			elements = new T[n];
			for (unsigned int i = 0; i < size_; i++)
				elements[i] = T();
		}

		Array(const Array &other) : size_(other.size_)
		{
			elements = new T[size_];
			for (unsigned int i = 0; i < size_; i++)
				elements[i] = other.elements[i];
		}

		~Array() { delete[] elements; }

		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				delete[] elements;
				size_ = other.size_;
				elements = new T[size_];
				for (unsigned int i = 0; i < size_; i++)
					elements[i] = other.elements[i];
			}
			return (*this);
		}

		T &operator[](unsigned int index)	// subscript operator
		{
			if (index >= size_)
				throw std::out_of_range("Index out of bounds");

			return (elements[index]);
		}

		unsigned int size() const { return size_; }
};

#endif
