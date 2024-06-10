/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:11:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/11 00:33:25 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *arr, size_t const &arrLen, void (*func)(const T &))
{
	if (!arr || !func)
		return;
	for (size_t i = 0; i < arrLen; ++i)
		func(arr[i]);
}

template<typename T>
void	iter(T *arr, size_t arrLen, void func(T &))
{
	if (!arr || !func)
		return;
	for (size_t i = 0; i < arrLen; ++i)
		func(arr[i]);
}

template<typename T>
void	squareX(T &x) { x *= x; } // square each element

template<typename T>
void	printX(T &x) { std::cout << x << " "; } // print element

#endif
