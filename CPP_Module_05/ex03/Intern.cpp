/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 00:03:33 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/03 03:57:28 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &other) { (void)other; }

Intern &Intern::operator=(const Intern &other) { (void)other; return *this; }

AForm *Intern::makeForm(const std::string &formName, const std::string &target) const
{
	AForm *createForms[3] = { new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target) };
	const char *formNames[] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	for (int i = 0; i < sizeof(formNames) / sizeof(formNames[0]); i++)
		if (formName != formNames[i])
			delete (createForms[i]);	// free memory for non-match formNames
	for (int i = 0; i < sizeof(formNames) / sizeof(formNames[0]); i++)
		if (formName == formNames[i])
			return (createForms[i]);	// return form for match

	for (int i = 0; i < sizeof(formNames) / sizeof(formNames[0]); i++)
			delete (createForms[i]);	// free all memory if no match
	std::cerr << "Error: Unknown form name\n";
	return (NULL);
}


/*AForm	*Intern::makeForm(const std::string &formName, const std::string &target) const
{
	const char *formNames[] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	int numForms = sizeof(formNames) / sizeof(formNames[0]);
	for (int i = 0; i < numForms; i++)
	{
		if (formName == formNames[i])
		{
			switch (i)
			{
				case (0): return new ShrubberyCreationForm(target);
				case (1): return new RobotomyRequestForm(target);
				case (2): return new PresidentialPardonForm(target);
			}
		}
	}
	std::cerr << "Error: Unknown form name\n";
	return (NULL);
}*/
