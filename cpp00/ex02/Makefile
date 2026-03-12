# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/28 13:33:20 by henrique-re       #+#    #+#              #
#    Updated: 2026/02/28 13:33:21 by henrique-re      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := myphonebook

CC := c++

SRCS := myphonebook.cpp

OBJS:= $(SRCS:%.cpp=%.o)

CFLAGS := -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

.PHONY: clean fclean re