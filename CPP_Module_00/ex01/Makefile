# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 02:19:52 by ookamonu          #+#    #+#              #
#    Updated: 2024/01/25 05:04:35 by ookamonu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wextra -Werror -Wall -std=c++98

all: phoneBook

phoneBook: main.cpp PhoneBook.cpp Contact.cpp
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f phoneBook


# NAME = phonebook

# CC = c++

# CFLAGS = -Wextra -Werror -Wall -std=c++98

# HEADER = main.hpp Contact.hpp PhoneBook.hpp 

# SRCS =  Contact.cpp \
# 		main.cpp \
# 		PhoneBook.cpp \

# OBJS = $(SRCS:.cpp=.o)


# all:$(NAME)

# $(NAME): $(OBJS)
# 	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# %.o: %.cpp $(HEADER)
# 	$(CC) -c $(CFLAGS) $< -o $@

# clean: 
# 	rm -f $(OBJS)

# fclean: clean
# 	rm $(NAME)

# re: fclean all

# .PHONY: clean re fclean
