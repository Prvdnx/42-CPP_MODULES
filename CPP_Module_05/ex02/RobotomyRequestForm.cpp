/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 04:15:34 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/02 21:15:18 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) 
{
	std::srand(std::time(0)); // seed random number generator
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		{ std::cout << executor.getName()+" couldn't execute form: "; throw AForm::FormNotSignedException(); }
	if (executor.getGrade() > getExecGrade())
		{ std::cout << executor.getName()+" couldn't execute form: "; throw AForm::GradeTooLowException(); }

	std::cout << "Making drilling noises: Rrrizzzzzbzzzzzz..." << std::endl;
	if (std::rand() % 2)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy of " << _target << " failed." << std::endl;
}
