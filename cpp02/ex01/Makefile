# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/16 22:03:48 by henrique-re       #+#    #+#              #
#    Updated: 2026/05/07 13:17:12 by hcarrasq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	Fixed

CXX			:=	c++

SRCS		:=	main.cpp Fixed.cpp

OBJS		:=	$(SRCS:%.cpp=%.o)

CXXFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@
	
clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

.PHONY: clean fclean re val