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

SRCS := $(SRCS:%.cpp=%.o)

CFLAGS := -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

.PHONY: clean fclean re
