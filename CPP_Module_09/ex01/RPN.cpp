/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:54:28 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/13 23:38:32 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"RPN.hpp"
#include	<stdexcept>
#include	<sstream>
#include	<iostream>
#include	<cstdlib>

RPN::RPN() {}
RPN::~RPN() {}

RPN::RPN(const RPN &name)
{
	 _stack = name._stack;
}

RPN	&RPN::operator=(const RPN &other)
{
  if (this != &other)
	_stack = other._stack;
	
  return (*this);
}

void	RPN::parse(const std::string &input)
{
	std::istringstream	iss(input);
	std::string			token;

	while (iss >> token)	// parse input string token by token using the stream extractor (returns a boolean)
	{
		if (isdigit(token[0]))	// if token is a digit, push it onto the stack
		{
			// std::istringstream	convert(token);
			// int	num;
			// if (!(convert >> num))
			//		throw std::runtime_error("Error: invalid token");
			// _stack.push(num);
			_stack.push(atoi(token.c_str()));
		}
		else if (token == "+" || token == "-" || token == "*" || token == "/")	// if token is an operator, do these
		{
			if (_stack.size() < 2)	// check if there are enough operands on stack for the operation
				throw std::runtime_error("Error: invalid expression");
			else
			{
				int a = _stack.top(); // assign top element of stack to 'a'
				_stack.pop(); // removed element from stack
				int b = _stack.top();
				_stack.pop();

				if (token == "+")
					_stack.push(a + b);
				else if (token == "-")
					_stack.push(b - a);
				else if (token == "*")
					_stack.push(a * b);
				else if (token == "/")
				{
					if (a == 0)
						throw std::runtime_error("Error: division by zero");
					_stack.push(b / a);
				}
			}
		}
		else	// if token is neither a digit nor an operator, it's invalid
			throw std::runtime_error("Error: invalid token");
	}
}

void	RPN::operate()
{
	if (_stack.size() != 1)
		throw std::runtime_error("Error: invalid expression");

	std::cout << _stack.top() << std::endl;
}
