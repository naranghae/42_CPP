# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/06 14:32:43 by chanykim          #+#    #+#              #
#    Updated: 2021/07/06 19:35:56 by chanykim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC = main.cpp \
	Zombie.cpp\
	newZombie.cpp\
	randomChump.cpp

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

INCLUDE = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean