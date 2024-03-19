/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:02:46 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/19 08:42:17 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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

		bool    operator>(const Fixed &other) const;
		bool    operator<(const Fixed &other) const;
		bool    operator>=(const Fixed &other) const;
		bool    operator<=(const Fixed &other) const;
		bool    operator==(const Fixed &other) const;
		bool    operator!=(const Fixed &other) const;

		Fixed   operator+(const Fixed &other) const;
		Fixed   operator-(const Fixed &other) const;
		Fixed   operator*(const Fixed &other) const;
		Fixed   operator/(const Fixed &other) const;

		Fixed   &operator++(); // pre-increment
		Fixed   operator++(int); // post-increment
		Fixed   &operator--(); // pre-decrement
		Fixed   operator--(int); // post-decrement

		static  Fixed &min(Fixed &a, Fixed &b);
		static  const Fixed &min(const Fixed &a, const Fixed &b);
		static  Fixed &max(Fixed &a, Fixed &b);
		static  const Fixed &max(const Fixed &a, const Fixed &b);

		friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
};

#endif
