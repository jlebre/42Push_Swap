/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:58:18 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/12 17:06:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_stack *stack1, t_stack *stack2)
{
	t_stack *head1;
	t_stack *head2;
	
	head1 = stack1->next;
	head2 = stack2->next;
	if (stack1->next->next)
	{
		stack1->next = stack1->next->next;
	}
	else 
		stack1->next = NULL;
	stack2->next = head1;
	head1->next = head2;
}

void	pa()
{
	push(stack_b(), stack_a());
	ft_printf("pa\n");
}

void	pb()
{
	push(stack_a(), stack_b());
	ft_printf("pb\n");
}
