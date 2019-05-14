# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 14:57:41 by yrabby            #+#    #+#              #
#    Updated: 2019/05/10 11:37:25 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = $(addsuffix .c, main list \
	  check_file smallest_square)

HED = fillit.h

LIB_HED = -I libft/includes

LIB = libft/libft.a
	  
CC = gcc

CFLAGS = -Wall -Werror -Wextra

RED = \x1b[0;31m
GREEN = \x1b[0;32m
BLUE = \x1b[0;34m
PURPLE = \x1b[0;35m
CYAN = \x1b[0;36m
YELLOW = \x1b[1;33m
RESET = \x1b[0m
OK = echo "$(GREEN) -- OK$(RESET)"

.PHONY: clean fclean re all

.PRECIOUS: $(SRC) $(HED) author 

all: $(NAME)

$(NAME): Makefile $(HED) $(SRC)
		@cd libft; make
		@echo " -- Compiling fillit..."
		@$(CC) $(CFLAGS) $(LIB) $(SRC) $(EHD) $(LIB_HED) -o $(NAME)
		@$(OK)

clean:
		@cd libft; make clean

fclean:
		@cd libft; make fclean
		@/bin/rm -f $(NAME)

re: fclean all
