# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 06:15:34 by ookamonu          #+#    #+#              #
#    Updated: 2024/01/25 06:19:29 by ookamonu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wextra -Werror -Wall -std=c++98

all: account

account: Account.cpp tests.cpp
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f account
