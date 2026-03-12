# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/12 15:52:00 by henrique-re       #+#    #+#              #
#    Updated: 2026/03/10 22:49:36 by henrique-re      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CC := c++

SRCS := megaphone.cpp

OBJS:= $(SRCS:%.cpp=%.o)

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

test:
	./$(NAME) "shhhhh... I think the students are asleep..."
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(NAME)

val:
	valgrind --leak-check=full -s ./$(NAME)

.PHONY: clean fclean re