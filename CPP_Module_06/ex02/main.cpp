/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:22:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/05 23:35:26 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	srand(time(NULL)); // seed random num generator with current time
	Base *obj[5];
	
	for (int i = 0; i < 5; i++)
	{
		obj[i] = generate(); // generate a random object
		std::cout << "\n*Ptr" << " = "; identify(obj[i]); // identify type of object
		std::cout << "&Ref" << " = "; identify(*obj[i]);
	}

	for (int i = 0; i < 5; i++)
		delete (obj[i]); // free memory

	return (0);
}
