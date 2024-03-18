/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:02:46 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/19 05:07:30 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int _value;
		static const int _frac_bits = 8;    
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed  	&operator=(const Fixed &other);
		~Fixed();
		int getRawBits() const;
		void    setRawBits(int const raw);
};

#endif
