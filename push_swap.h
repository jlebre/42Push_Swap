/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:16 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/08 20:37:51 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"
# define INT_MAX    2147483647
# define INT_MIN    -2147483648

typedef struct s_stack
{
	int				content;
	struct s_stack 	*next;
}		t_stack;

//COLORS
int	ft_green(char *str);
int	ft_red(char *str);
int	ft_yellow(char *str);

int check(int argc, char **argv)

/*
//SWAP
swap_a();
swap_b();
swap_ab();

//PUSH
push_a();
push_b();

//ROTATE
rotate_a();
rotate_b();
rotate_ab();

//REVERSE ROTATE
rev_rotate_a();
rev_rotate_b();
rev_rotate_ab();
*/
//UTILS
void    ft_error(void);

#endif