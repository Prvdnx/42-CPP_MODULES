# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 05:34:26 by ookamonu          #+#    #+#              #
#    Updated: 2024/02/21 05:57:49 by ookamonu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Zombie

CC		= c++

CFLAGS	= -g3 -std=c++98 -Wextra -Werror -Wall

HEADER	= Zombie.hpp

SRCS	= Zombie.cpp main.cpp newZombie.cpp randomChump.cpp 

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
