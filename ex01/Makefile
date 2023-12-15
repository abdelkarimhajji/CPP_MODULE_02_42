# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 15:27:33 by ahajji            #+#    #+#              #
#    Updated: 2023/12/15 16:49:54 by ahajji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

%.o	: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@
	
# $< : %.cpp
#$@ : %.o

$(NAME) : $(OBJ)
	@$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

all	: $(NAME)

clean :
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all

.PHONY : all clean fclean re
