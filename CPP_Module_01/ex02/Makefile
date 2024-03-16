# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 05:34:26 by ookamonu          #+#    #+#              #
#    Updated: 2024/03/11 09:20:32 by ookamonu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Brain

CC		= c++

CFLAGS	= -g3 -std=c++98 -Wextra -Werror -Wall

SRCS	= main.cpp

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
