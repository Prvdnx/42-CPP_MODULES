# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 00:23:41 by ookamonu          #+#    #+#              #
#    Updated: 2024/01/30 17:58:44 by ookamonu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wextra -Werror -Wall -std=c++98

all: megaphone

megaphone: megaphone.cpp
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f megaphone


# NAME = megaphone

# CC = c++

# CFLAGS = -Wall -Werror -Wextra -std=c++98

# SRC = megaphone.cpp

# OBJ = $(SRC:.cpp=.o)

# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# clean:
# 	$(RM) $(OBJ)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all clean fclean re
