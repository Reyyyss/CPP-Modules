# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/13 12:38:59 by henrique-re       #+#    #+#              #
#    Updated: 2026/04/13 16:02:47 by henrique-re      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		:=	Sed_is_for_losers

CXX		:=	c++

SRCS		:=	main.cpp notsed.cpp

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
	rm -f $(NAME)

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

.PHONY: clean fclean re val