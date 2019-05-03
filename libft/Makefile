# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 15:48:51 by yrabby            #+#    #+#              #
#    Updated: 2019/05/03 14:04:26 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memalloc.c \
	  ft_memccpy.c \
	  ft_memcpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_memdel.c \
	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putendl.c \
	  ft_putendl_fd.c \
	  ft_putnbr.c \
	  ft_putnbr_fd.c \
	  ft_putstr.c \
	  ft_putstr_fd.c \
	  ft_strcat.c \
	  ft_strchr.c \
	  ft_strclr.c \
	  ft_strcmp.c \
	  ft_strcpy.c \
	  ft_strdel.c \
	  ft_strdup.c \
	  ft_strequ.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strncat.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strnequ.c \
	  ft_strnew.c \
	  ft_strnstr.c \
	  ft_strrchr.c\
	  ft_strsplit.c \
	  ft_strstr.c \
	  ft_strsub.c \
	  ft_strtrim.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_lstdel.c \
	  ft_lstdelone.c \
	  ft_lstadd.c \
	  ft_lstnew.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_intcount.c \
	  ft_isprime.c \
	  ft_lstlen.c \
	  ft_power.c \
	  ft_basecnv.c

OBJ = $(SRC:.c=.o)

OBJ_DIR = objs

SRC_DIR = srcs

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))

OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ))

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEDER = -I includes

.PHONY: clean fclean re all

.PRECIOUS: $(SRC) $(SRCS) $(SRC_DIR) author

.SUFFIXES: .c .o

all: $(NAME)

$(OBJ):

$(OBJS): $(SRCS)
		$(CC) $(CFLAGS) -c $(SRCS) $(HEDER) ;
		/bin/mkdir -p $(OBJ_DIR) ;
		/bin/mv $(OBJ) $(OBJ_DIR)/

$(NAME): $(OBJS)
		ar rv $@ $(OBJS)
		ranlib $@

clean: 
		@/bin/rm -rf $(OBJ_DIR)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
