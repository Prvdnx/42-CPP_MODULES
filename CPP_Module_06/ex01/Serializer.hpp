/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:11:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/06 00:30:27 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include <iostream>

typedef	struct	// the Data structure
{
	int		id;
	float	value;
}	Data;

class	Serializer
{
	public:
		Serializer();
		Serializer(Serializer &src);
		Serializer &operator=(Serializer &other);
		~Serializer();

		static uintptr_t serialize(Data *dataPtr);
		static Data *deserialize(uintptr_t serializedPtr);
};

#endif
