# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/30 14:15:41 by chanykim          #+#    #+#              #
#    Updated: 2021/07/01 19:27:14 by chanykim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = phonebook.cpp

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

INCLUDE = phonebook.h

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(OBJ)%.o : $(SRC)%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^ -o $@

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean