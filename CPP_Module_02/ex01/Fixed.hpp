/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:02:46 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/19 06:24:07 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
	private:
		int _value;
		static const int _frac_bits = 8;
	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(const Fixed &other);
		Fixed   &operator=(const Fixed &other);
		~Fixed();
		float   toFloat() const;
		int     toInt() const;

		//friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
