# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/04 09:49:56 by hmateque          #+#    #+#              #
#    Updated: 2024/09/04 10:05:11 by hmateque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ProGen
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC_DIR = ./src
SRC =	$(NAME).c\
		$(SRC_DIR)/functions_aux.c\
		$(SRC_DIR)/functions_file_manipulation.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re