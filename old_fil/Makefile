# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 14:57:41 by yrabby            #+#    #+#              #
#    Updated: 2019/05/06 13:07:03 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = $(addsuffix .c, main shape_id count_shape \
	  check_file smallest_square)

HED = fillit.h

LIB_HED = -I libft/includes

LIB = libft/libft.a
	  
CC = gcc

CFLAGS = -Wall -Werror -Wextra

.PHONY: clean fclean re all

.PRECIOUS: $(SRC) $(HED) author

all: $(NAME)

$(NAME): Makefile $(HED) $(SRC)
		@cd libft; make
		@$(CC) $(CFLAGS) $(LIB) $(SRC) -o $(NAME)

clean:
		@cd libft; make clean

fclean:
		@cd libft; make fclean
		@/bin/rm -f $(NAME)

re: fclean all
