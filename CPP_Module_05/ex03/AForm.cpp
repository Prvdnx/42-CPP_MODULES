/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 04:22:29 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/03 03:41:57 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string &name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		{ std::cout << "\nAForm: "+_name; throw GradeTooHighException(); }
	if (signGrade > 150 || execGrade > 150)
		{ std::cout << "\nAForm: "+_name; throw GradeTooLowException(); }
}

AForm::AForm(const AForm &other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _execGrade(other._execGrade) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return (*this);
}

const std::string &AForm::getName() const
{
	return (_name);
}

bool	AForm::isSigned() const
{
	return (_isSigned);
}

int	AForm::getSignGrade() const
{
	return (_signGrade);
}

int	AForm::getExecGrade() const
{
	return (_execGrade);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		{ _isSigned = true; std::cout << '\n'+bureaucrat.getName() << " signed " << _name << std::endl; }
	else
		{ _isSigned = false; std::cout << "\nCouldn't sign " << _name+": "; throw GradeTooLowException(); }
}

std::ostream &operator<<(std::ostream &outputStream, const AForm &AForm)
{
	outputStream << "AForm: " << AForm.getName() << ", Sign Grade: " << AForm.getSignGrade() << ", Exec Grade: " << AForm.getExecGrade() << ", Signed: " << (AForm.isSigned() ? "Yes" : "No");
	return (outputStream);
}
