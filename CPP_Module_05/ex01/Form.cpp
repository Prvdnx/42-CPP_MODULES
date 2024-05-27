/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 04:22:29 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/28 00:36:55 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		{ std::cout << "\nForm: "+_name; throw GradeTooHighException(); }
	if (signGrade > 150 || execGrade > 150)
		{ std::cout << "\nForm: "+_name; throw GradeTooLowException(); }
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _execGrade(other._execGrade) {}

Form::~Form() {}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return (*this);
}

const std::string &Form::getName() const
{
	return (_name);
}

bool	Form::isSigned() const
{
	return (_isSigned);
}

int	Form::getSignGrade() const
{
	return (_signGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
	{
		if (bureaucrat.getGrade() <= _execGrade) // check executive grade requirement
		{ _isSigned = true; std::cout << bureaucrat.getName() << " signed " << _name << std::endl; }
		else
			{ _isSigned = false; std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because grade is too low for executive approval" << std::endl; }
	}
	else
		{ _isSigned = false; std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because grade is too low to sign it" << std::endl; }
}

std::ostream &operator<<(std::ostream &outputStream, const Form &form)
{
	outputStream << "Form: " << form.getName() << ", Sign Grade: " << form.getSignGrade() << ", Exec Grade: " << form.getExecGrade() << ", Signed: " << (form.isSigned() ? "Yes" : "No");
	return (outputStream);
}
