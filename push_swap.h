/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:16 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 16:50:21 by jlebre           ###   ########.fr       */
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
	int				size;
	struct s_stack	*next;
}		t_stack;

//COLORS
int		ft_green(char *str);
int		ft_red(char *str);
int		ft_yellow(char *str);

//CHECKS
int		check(char **argv);
int		check_is_sorted(void);

//STACKS
t_stack	*stack_a(void);
t_stack	*stack_b(void);
int		add_stack(t_stack *stack, int nbr);
int		size_of_stack(void);
void	free_stack(t_stack *stack);
void	print_stack(void);

//ALGORITHM
void	sort_small(void);
void	sort_big(void);

//SWAP
void	swap(t_stack *stack);
void	sa(void);
void	sb(void);
void	ss(void);

//PUSH
void	push(t_stack *stack1, t_stack *stack2);
void	pa(void);
void	pb(void);

//ROTATE
void	rotate(t_stack *stack);
void	ra(void);
void	rb(void);
void	rr(void);

//REVERSE ROTATE
void	rev_rotate(t_stack *stack);
void	rra(void);
void	rrb(void);
void	rrr(void);

//UTILS
void	ft_error(void);
int		downsize(void);

#endif
