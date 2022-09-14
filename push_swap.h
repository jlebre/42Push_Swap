/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:16 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/12 12:05:14 by marvin           ###   ########.fr       */
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
	int				nb;
	struct s_stack 	*next;
}		t_stack;

//COLORS
int	ft_green(char *str);
int	ft_red(char *str);
int	ft_yellow(char *str);

//CHECKS
int 	check(char **argv);
int		check_is_sorted();

//STACKS
t_stack	*stack_a();
t_stack	*stack_b();
int add_stack(t_stack *stack, int  nbr);
void    free_stack(t_stack *stack);
void    print_stack();

//ALGORITHM
void    sort_small();
void    sort_big();

//SWAP
void    swap(t_stack *stack);
void	sa();
void	sb();
void	ss();

//PUSH
void    push(t_stack *stack1, t_stack *stack2);
void	pa();
void	pb();

//ROTATE
void    rotate(t_stack *stack);
void	ra();
void	rb();
void	rr();

//REVERSE ROTATE
void    rev_rotate(t_stack *stack);
void	rra();
void	rrb();
void	rrr();

//UTILS
void    ft_error(void);
int		downsize();

#endif