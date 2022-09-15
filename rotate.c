/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:29:15 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 16:34:46 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_stack	*head;
	t_stack	*new_head;
	t_stack	*tail;

	if (stack->next->next != NULL)
	{
		head = stack->next;
		tail = stack->next;
		new_head = stack->next->next;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		stack->next = new_head;
		tail->next = head;
		head->next = NULL;
	}
}

void	ra(void)
{
	rotate(stack_a());
	ft_printf("ra\n");
}

void	rb(void)
{
	rotate(stack_b());
	ft_printf("rb\n");
}

void	rr(void)
{
	rotate(stack_a());
	rotate(stack_b());
	ft_printf("rr\n");
}
