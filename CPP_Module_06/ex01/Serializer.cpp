/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:13:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/06 00:30:15 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer&) {}

Serializer &Serializer::operator=(Serializer&) { return (*this); }

Serializer::~Serializer() {}

uintptr_t	Serializer::serialize(Data *dataPtr)
{
	return (reinterpret_cast<uintptr_t>(dataPtr));	// convert Data pointer "dataPtr" to uintptr_t
}

Data	*Serializer::deserialize(uintptr_t serializedPtr)
{
	return (reinterpret_cast<Data*>(serializedPtr)); // convert uintptr_t "serializedPtr" back to Data pointer
}
