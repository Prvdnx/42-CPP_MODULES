/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:11:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/06 03:13:39 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WHATEVER_HPP
#define  WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
	std::cout << "\nSwap Successful!" << std::endl;
}

template <typename T>
T	min(T &a, T &b)
{
	if (b <= a)
		return (b);
	return (a);
}

template <typename T>
T	max(T &a, T &b)
{
	if (b >= a)
		return (b);
	return (a);
}

#endif
