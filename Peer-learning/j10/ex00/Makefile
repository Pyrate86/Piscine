# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/16 05:17:12 by ghilbert          #+#    #+#              #
#    Updated: 2014/07/16 23:19:33 by ghilbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = ./src/
INCLUDES_PATH = ./includes/

OUTPUT_PATH = ./

FILES = $(SRC_PATH)ft_putchar.c \
		$(SRC_PATH)ft_putstr.c \
		$(SRC_PATH)ft_strcmp.c \
		$(SRC_PATH)ft_strlen.c \
		$(SRC_PATH)ft_swap.c

OBJ_FILES = ft_putchar.o \
			ft_putstr.o \
			ft_strcmp.o \
			ft_strlen.o \
			ft_swap.o


FLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME):
	gcc $(FLAGS) -c $(FILES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(OUTPUT_PATH)$(NAME)

re: fclean all
