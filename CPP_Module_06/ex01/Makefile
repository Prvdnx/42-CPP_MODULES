# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 06:28:28 by ookamonu          #+#    #+#              #
#    Updated: 2024/06/08 20:55:03 by ookamonu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Serializer

CC		= c++

CFLAGS	= -std=c++98 -Wextra -Werror -Wall

SRCS	= main.cpp Serializer.cpp

OBJS	= $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# %.o: %.cpp $(HEADER)
# 	$(CC) -c $(CFLAGS) $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: clean re fclean
