# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 16:19:11 by chanykim          #+#    #+#              #
#    Updated: 2021/11/02 18:13:34 by chanykim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karenFilter

SRC = main.cpp Karen.cpp

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

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