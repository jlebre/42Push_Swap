/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:35 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/11 19:22:20 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_stack *stack)
{
    t_stack *temp;

    temp = stack->next;
    if (stack->next->next)
	{
        stack->next = stack->next->next;
        stack->next->next = temp;
    }
	else
		return ;
}

void    sa()
{
    swap(stack_a());
    ft_printf("sa\n");
}

void    sb()
{
    swap(stack_b());
    ft_printf("sb\n");
}

void    ss()
{
    swap(stack_a());
    swap(stack_b());
    ft_printf("ss\n");
}
