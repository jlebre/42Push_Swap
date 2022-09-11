/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:29:15 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/11 19:54:07 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_stack	*temp;

	temp = stack->next;
	if (stack->next->next)
        stack->next = stack->next->next;
    while (stack)
		stack = stack->next;
	stack = temp;
	temp->next = NULL;
}

void	ra()
{
	rotate(stack_a());
	ft_printf("ra\n");
}

void	rb()
{
	rotate(stack_b());
	ft_printf("rb\n");
}

void	rr()
{
	rotate(stack_a());
	rotate(stack_b());
	ft_printf("rr\n");
}
