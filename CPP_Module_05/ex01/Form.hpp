/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:23:16 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/27 05:04:32 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class	Bureaucrat; // forward declaration of class

class	Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;

	public:
		Form(const std::string &name, int signGrade, int execGrade);
		~Form();
		Form(const Form &other);
		Form &operator=(const Form &other);

		const std::string &getName() const;
		bool isSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void	beSigned(Bureaucrat &bureaucrat);

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
};

std::ostream &operator<<(std::ostream &outputStream, const Form &form);

#endif
