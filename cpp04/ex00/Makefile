# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/05 02:22:51 by marvin            #+#    #+#              #
#    Updated: 2026/05/05 02:22:51 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := animal

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98

SRCS := main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re