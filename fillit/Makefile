# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 14:57:41 by yrabby            #+#    #+#              #
#    Updated: 2019/05/04 12:15:25 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c \
	  get_next_line.c \
	  shape_id.c \
	  count_shape.c

HED = fillit.h libft.h get_next_line.h

LIB = libft.a
	  
CC = gcc

CFLAGS = -Wall -Werror -Wextra

.PHONY: clean fclean re all

.PRECIOUS: $(SRC) $(HED) author

all: $(NAME)

$(NAME): Makefile $(HED) $(SRC)
		@$(CC) $(CFLAGS) $(LIB) $(SRC) -o $@

clean: fclean

fclean:
		@/bin/rm -f $(NAME)

re: fclean all
