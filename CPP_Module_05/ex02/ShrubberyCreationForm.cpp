/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 04:16:04 by ookamonu          #+#    #+#             */
/*   Updated: 2024/06/02 23:35:56 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::cout << "Executing ShrubberyCreationForm...\n";  // Debug print
	if (!isSigned())
		{ std::cout << executor.getName()+" couldn't execute form: "; throw AForm::FormNotSignedException(); }
	if (executor.getGrade() > getExecGrade())
		{ std::cout << executor.getName()+" couldn't execute form: "; throw AForm::GradeTooLowException(); }

	std::ofstream file(_target + "_shrubbery");
	if (file.is_open())
	{
		file << "\n"
			<< "               _{\\{\\{\\/}/}/}_\n"
			<< "             {/{/\\}{/{/\\\\}{/\\}_\n"
			<< "           {/{/\\}{/{/\\\\}(_)}{/{/\\}_\n"
			<< "         {\\{/(\\}\\}{/{/\\\\}{/{/\\)/\\}_\n"
			<< "        {/{/(_)/}{\\{/\\\\)}{\\(_){/}/}/}\n"
			<< "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
			<< "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
			<< "      _{\\{/{\\{/{\\(_)/}{/{/{/\\}\\})\\}{/{/\\}\n"
			<< "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
			<< "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
			<< "       {/{\\{\\/}{/{\\{\\/}/}{\\{\\/}/}\\}(_)/}\\}\n"
			<< "      {/{\\{\\/}{/){\\{\\/}/}{\\{\\(/}/}\\}/}/}\\}\n"
			<< "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}/}\\}\n"
			<< "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
			<< "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
			<< "            {/{/{\\{\\/}{/{\\{\\(_)/}\\}\n"
			<< "             {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
			<< "               {){/{\\/}{\\/}\\}\\}\n"
			<< "              (_)  \\.-'.-/\n"
			<< "          __...--- |'-.-'| --...__\n"
			<< "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
			<< " -\"    ' .  . '    |.'-._| '  . .  '  - .\n"
			<< " .  '-  '    .--'  | '-.'|    .  '  . '\n"
			<< "          ' ..     |'-_.-|\n"
			<< "  .  '  .       _.-|-._ -|-._  .  '  .\n"
			<< "              .'   |'- .-|   '.\n"
			<< "  ..-'   ' .  '.   `-._.-'   .'  '  - .\n"
			<< "   .-' '        '-._______.-'     '  .\n"
			<< "        .      ~,\n"
			<< "    .       .   |\\   .    ' '-.\n"
			<< "    ___________/  \\____________\n"
			<< "   /  Why is it, when you want \\\n"
			<< "  |  something, it is so damn   |\n"
			<< "  |    much work to get it?     |\n"
			<< "   \\___________________________/\n";
		file.close();
	}
	else
	{
		std::cerr << "Unable to open file: " << _target + "_shrubbery" << std::endl;
	}
}
