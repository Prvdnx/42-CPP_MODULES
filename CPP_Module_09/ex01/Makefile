# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 06:58:28 by ookamonu          #+#    #+#              #
#    Updated: 2024/05/04 06:14:03 by ookamonu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= RPN

CC		= c++

CFLAGS	= -std=c++98 -Wextra -Werror -Wall

SRCS	= main.cpp	RPN.cpp

OBJS	= $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: clean re fclean
