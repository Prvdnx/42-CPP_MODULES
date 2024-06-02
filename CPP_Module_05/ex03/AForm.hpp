/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:23:16 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/02 04:55:32 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class	Bureaucrat; // forward declaration of class

class	AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;

	public:
		AForm(const std::string &name, int signGrade, int execGrade);
		AForm(const AForm &other);
		virtual ~AForm();
		AForm &operator=(const AForm &other);

		const std::string &getName() const;
		bool	isSigned() const;
		int		getSignGrade() const;
		int		getExecGrade() const;
		void	beSigned(Bureaucrat &bureaucrat);

		virtual void execute(Bureaucrat const &executor) const = 0;	// pure virtual

		enum FormType { SHRUBBERY, ROBOTOMY, PARDON };
		virtual FormType getType() const = 0;
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Grade too HIGH"); }
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Grade too LOW"); }
		};
		
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return "Form Not Signed"; }
		};
};

std::ostream &operator<<(std::ostream &outputStream, const AForm &AForm);

#endif
