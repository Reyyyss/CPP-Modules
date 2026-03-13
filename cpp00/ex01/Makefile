# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/10 22:45:09 by henrique-re       #+#    #+#              #
#    Updated: 2026/03/10 22:51:04 by henrique-re      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Phonebook

CC := c++

SRCS := main.cpp Phonebook.cpp Contact.cpp

OBJS := $(SRCS:.cpp=.o)

CFLAGS := -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

.PHONY: all clean fclean re val
