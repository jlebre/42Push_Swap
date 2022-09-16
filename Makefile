# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 17:09:41 by admin             #+#    #+#              #
#    Updated: 2022/09/15 19:29:21 by jlebre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = @rm -fr
FLAGS = -Wall -Werror -Wextra -fsanitize=address

NAME = push_swap

SRC = push_swap.c check.c add_stack.c check_is_sorted.c \
		push.c swap.c rotate.c rev_rotate.c sort_big.c sort_small.c \
		print_stack.c sort_4.c sort_5.c

OBJ = $(SRC:.c=.o)

HEADER = push_swap.h libft/libft.h

LIBFT = libft/libft.a
LIBFT_PATH = libft
LIB = .

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(HEADER)
	@$(CC) $(OBJ) $(LIBFT) $(FLAGS) -I$(LIB) -I$(LIBFT_PATH) -o $(NAME)
	@echo "\033[0;32mPush_swap Compiled!\033[0m"

$(LIBFT):
	@$(MAKE) -C $(LIBFT_PATH)

.c.o:
	@$(CC) $(FLAGS) -I$(LIB) -I$(LIBFT_PATH) -c $< -o $(<:.c=.o)

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
