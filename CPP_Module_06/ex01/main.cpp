/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/04 18:17:50 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data; 	// create Data object & initialize members
	data.id = 42;
	data.value = 3.141;

	std::cout << "\nOriginal Data:" << std::endl; // print original Data object
	std::cout << "ID: " << data.id << std::endl;
	std::cout << "Value: " << data.value << std::endl;

	uintptr_t serializedPtr = Serializer::serialize(&data); // serialize Data object by converting its pointer to uintptr_t
	std::cout << "\nSerialized Data Pointer: " << serializedPtr << std::endl;

	Data *deserializedPtr = Serializer::deserialize(serializedPtr); // deserialize the serialized pointer back to a Data pointer
	
	std::cout << "\nDeserialized Data:" << std::endl; // print deserialized Data object
	std::cout << "ID: " << deserializedPtr->id << std::endl;
	std::cout << "Value: " << deserializedPtr->value << '\n' << std::endl;

	return (0);
}
