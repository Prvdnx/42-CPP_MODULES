# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 05:34:26 by ookamonu          #+#    #+#              #
#    Updated: 2024/03/19 23:37:43 by ookamonu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Clap

CC		= c++

CFLAGS	= -g3 -std=c++98 -Wextra -Werror -Wall

HEADER	= ClapTrap.hpp ScavTrap.hpp FlagTrap.hpp

SRCS	= ClapTrap.cpp ScavTrap.cpp FlagTrap.cpp main.cpp

OBJS	= $(SRCS:.cpp=.o)


all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) -c $(CFLAGS) $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: clean re fclean
