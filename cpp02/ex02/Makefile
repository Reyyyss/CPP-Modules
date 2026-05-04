# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/16 22:03:48 by henrique-re       #+#    #+#              #
#    Updated: 2026/04/18 15:12:51 by henrique-re      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	Fixed

CXX			:=	c++

SRCS		:=	main.cpp Fixed.cpp

OBJS		:=	$(SRCS:%.cpp=%.o)

CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98 -g

all: $(NAME) && clear

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

.PHONY: clean fclean re val