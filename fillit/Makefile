# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 14:57:41 by yrabby            #+#    #+#              #
#    Updated: 2019/04/30 15:50:28 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c

SRCSDIR = src

SRCS = $(addprefix $(SRCSDIR)/, $(SRC))

HED = includs/fillit.h

HEDDIR = -I includs ../libft

LIB = ../libft/libft.a
	  
CC = gcc

CFLAGS = -Wall -Werror -Wextra

.PHONY: clean fclean re all

.PRECIOUS: $(SRC) $(SRCS) $(HED) author

all: $(NAME)

$(NAME): Makefile $(HED)
		@$(CC) $(CFLAGS) $(HEDDIR) $(SRCS) -o $@

clean: fclean

fclean:
		@/bin/rm -f $(NAME)

re: fclean all
