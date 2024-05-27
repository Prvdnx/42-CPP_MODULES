/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:13:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/28 00:02:53 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void	Bureaucrat::signForm(Form &form)
{
        form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &outputStream, const Bureaucrat &bureaucrat)
{
	outputStream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (outputStream);
}
