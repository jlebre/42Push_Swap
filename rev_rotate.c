/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:37:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/11 19:41:52 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rev_rotate(t_stack *stack)
{
	t_stack	*temp;

	temp = stack->next;
    while (stack)
		stack = stack->next;
	stack = temp;
	if (stack->next->next)
        stack->next = stack->next->next;
	temp->next = NULL; 
}

void	rra()
{
	rev_rotate(stack_a());
	ft_printf("rra\n");
}

void	rrb()
{
	rev_rotate(stack_b());
	ft_printf("rrb\n");
}

void	rrr()
{
	rev_rotate(stack_a());
	rev_rotate(stack_b());
	ft_printf("rrr\n");
}
