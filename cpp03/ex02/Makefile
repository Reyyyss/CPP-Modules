# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/16 12:36:27 by henrique-re       #+#    #+#              #
#    Updated: 2026/05/12 01:48:11 by henrique-re      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	ClapTrap

CXX		:=	c++

SRCS		:=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS		:=	$(SRCS:%.cpp=%.o)

CXXFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f  $(NAME)
re: 
	fclean all
val:
	valgrind --leak-check=full -s ./$(NAME)

.PHONY: clean fclean re val