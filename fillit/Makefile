# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 14:57:41 by yrabby            #+#    #+#              #
#    Updated: 2019/05/16 10:25:10 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = $(addsuffix .c, \
      main \
      list \
      check_file \
      square \
      add_shapes\
      ft_putchar \
      ft_putstr \
      ft_strsub \
      ft_strdup \
      ft_strlen \
      ft_strdel \
      ft_strnew \
      ft_strjoin \
      ft_strchr \
      ft_memalloc \
      ft_bzero \
      get_next_line)


OBJ = $(SRC:.c=.o)

SRC_DIR = srcs

OBJ_DIR = objs

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))

OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ))

HED = -I includes

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RED = \033[0;31m
GREEN = \033[0;32m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
YELLOW = \033[1;33m
RESET = \033[0m
OK = echo "$(GREEN) -- OK$(RESET)"

.PHONY: clean fclean re all

.PRECIOUS: $(SRC) $(HED) author 

all: $(NAME)

$(OBJ):

$(OBJS): $(SRCS)
	@echo "$(PURPLE) -- Compiling srcs..."
	@$(CC) $(CFLAGS) -c $(SRCS) $(HED)
	@$(OK)
	@/bin/mkdir -p $(OBJ_DIR)
	@/bin/mv $(OBJ) $(OBJ_DIR)

$(NAME): Makefile $(OBJS)
	@echo "$(PURPLE) -- Linking fillit..."
	@$(CC) $(CFLAGS) $(OBJS) $(HED) -o $(NAME)
	@$(OK)

clean:
	@echo "$(YELLOW) -- Cleaning..."
	@/bin/rm -rf $(OBJ_DIR)
	@$(OK)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all