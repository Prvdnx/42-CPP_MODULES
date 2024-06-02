/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:13:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/02 22:48:02 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Bureaucrat::Bureaucrat() : _name("mr.default"), _grade(42) {}

Bureaucrat::Bureaucrat(const std::string &burName, int burGrade) : _name(burName), _grade(burGrade)
{
	if (burGrade < 1)
		{ std::cout << "\nBureaucrat: "+_name; throw GradeTooHighException(); }
	if (burGrade > 150)
		{ std::cout << "\nBureaucrat: "+_name; throw GradeTooLowException(); }
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		_grade = other._grade;
	return (*this);
}

const std::string &Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		{ std::cout << "\nBureaucrat: "+_name; throw GradeTooHighException(); }
	else
		_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		{ std::cout << "\nBureaucrat: "+_name; throw GradeTooLowException(); }
	else
		_grade++;
}

void	Bureaucrat::signForm(AForm &AForm)
{
		AForm.beSigned(*this);
}

void	Bureaucrat::executeForm(AForm const &form)
{
	std::cout << "Bureaucrat is attempting to execute a form...\n";

	if (form.getType() == AForm::SHRUBBERY)
	{
		ShrubberyCreationForm &shrubberyForm = (ShrubberyCreationForm &)form;
		shrubberyForm.execute(*this);
	}
	else if (form.getType() == AForm::ROBOTOMY)
	{
		RobotomyRequestForm &robotomyForm = (RobotomyRequestForm &)form;
		robotomyForm.execute(*this);
	}
	else if (form.getType() == AForm::PARDON)
	{
		PresidentialPardonForm &pardonForm = (PresidentialPardonForm &)form;
		pardonForm.execute(*this);
	}
}

std::ostream &operator<<(std::ostream &outputStream, const Bureaucrat &bureaucrat)
{
	outputStream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (outputStream);
}
