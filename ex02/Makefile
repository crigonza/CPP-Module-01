# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 19:07:10 by crigonza          #+#    #+#              #
#    Updated: 2023/09/11 20:34:21 by crigonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(NAME)

.PHONY: all clean fclean re