/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:58:18 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/11 19:15:40 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_stack *stack1, t_stack *stack2)
{
	t_stack *tmp;

	tmp = stack1->next;
	if (stack1->next->next)
		stack1->next = stack1->next->next;
	else
		stack1->next = NULL;
	stack2->next = tmp;
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