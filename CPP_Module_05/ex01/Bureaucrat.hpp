/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:11:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/27 05:04:56 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"	// form header

class	Form;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string &burName, int burGrade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);

		const std::string	&getName() const;
		int					getGrade() const;

		void	incrementGrade();
		void	decrementGrade();

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
		
		void	signForm(Form &form); // new function to sign a form
};

std::ostream &operator<<(std::ostream &outputStream, const Bureaucrat &bureaucrat);

#endif
