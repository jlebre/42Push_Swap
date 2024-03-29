/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:35 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 16:39:20 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_stack	*head;
	t_stack	*new_head;
	t_stack	*temp;

	if (stack->next->next)
	{
		head = stack->next;
		new_head = stack->next->next;
		temp = new_head->next;
		stack->next = new_head;
		new_head->next = head;
		if (stack->next->next->next)
		{
			head->next = temp;
		}
		else
			head->next = NULL;
	}
}

void	sa(void)
{
	swap(stack_a());
	ft_printf("sa\n");
}

void	sb(void)
{
	swap(stack_b());
	ft_printf("sb\n");
}

void	ss(void)
{
	swap(stack_a());
	swap(stack_b());
	ft_printf("ss\n");
}
