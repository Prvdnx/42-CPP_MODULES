# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 05:34:26 by ookamonu          #+#    #+#              #
#    Updated: 2024/03/22 01:32:14 by ookamonu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= AnimalSound

CC		= c++

CFLAGS	= -g3 -std=c++98 -Wextra -Werror -Wall

HEADER	= Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp

SRCS	= Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp main.cpp

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
