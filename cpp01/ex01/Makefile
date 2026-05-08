# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/12 16:58:43 by henrique-re       #+#    #+#              #
#    Updated: 2026/05/05 17:50:46 by hcarrasq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	Moar_brainz

CXX			:=	c++

SRCS		:=	main.cpp \
				Zombie.cpp \
				ZombieHorde.cpp

OBJS		:=	$(SRCS:%.cpp=%.o)

CFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CXX) -c $(CFLAGS) $< -o $@
	
clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

.PHONY: clean fclean re val