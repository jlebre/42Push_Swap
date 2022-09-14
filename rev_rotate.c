/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:37:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/12 23:53:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rev_rotate(t_stack *stack)
{
	t_stack	*head;
	t_stack	*new_tail;
	t_stack	*tail;

	if (stack->next->next != NULL)
	{
		head = stack->next;
		tail = stack->next;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		new_tail = tail;
		tail = tail->next;
		stack->next = tail;
		tail->next = head;
		new_tail->next = NULL;
	}
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
