# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/13 12:25:46 by henrique-re       #+#    #+#              #
#    Updated: 2026/05/05 17:45:27 by hcarrasq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	HI_THIS_IS_BRAIN

CXX			:=	c++

SRCS		:=	main.cpp

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