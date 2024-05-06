
NAME	= PmergeMe

CC		= c++

CFLAGS	= -std=c++98 -Wextra -Werror -Wall

SRCS	= main.cpp PmergeMe.cpp

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
