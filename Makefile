# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admin <admin@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 17:09:41 by admin             #+#    #+#              #
#    Updated: 2022/06/24 21:02:29 by admin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = @rm -fr
FLAGS = -Wall -Werror -Wextra

NAME = push_swap

SRC = push_swap.c colors.c
OBJ = $(SRC:.c=.o)

HEADER = push_swap.h libft/libft.h

LIBFT = libft/libft.a
LIBFT_PATH = libft
LIB = .

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(HEADER)
	@$(CC) $(OBJ) $(LIBFT) -I$(LIB) -I$(LIBFT_PATH) -o $(NAME)
#@$(CC) $(OBJ) $(LIBFT) -I$(LIB) -I$(LIBFT_PATH) $(MLXFLAGS_LINUX) -o $(NAME)
	@echo "\033[0;32mPush_swap Compiled!\033[0m"

$(LIBFT):
	@$(MAKE) -C $(LIBFT_PATH)

.c.o:
	@$(CC) $(FLAGS) -I$(LIB) -I$(LIBFT_PATH) -c $< -o $@
#@$(CC) $(FLAGS) -I$(LIB) -I$(LIBFT_PATH) -I/usr/include -Imlx_linux -O3 -c $< -o $@

clean:
	$(RM) $(OBJ)
	@$(MAKE) clean -C $(LIBFT_PATH)
	@echo "\033[0;31m.o Files Removed!\033[0m"

fclean: clean
	$(RM) $(NAME) 
	@$(MAKE) fclean -C $(LIBFT_PATH)
	@echo "\033[0;31mPush_swap Removed!\033[0m"

re: fclean all

.PHONY: all clean fclean re
