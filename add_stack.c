/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:32:54 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 16:55:37 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	add_stack(t_stack *stack, int nbr)
{
	t_stack	*ptr;
	t_stack	*temp;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
		return (0);
	ptr->content = nbr;
	ptr->next = NULL;
	if (!stack->next)
	{
		stack->next = ptr;
		return (1);
	}
	temp = stack->next;
	while (temp != NULL)
	{
		if (!temp->next)
			break ;
		temp = temp->next;
	}
	temp->next = ptr;
	return (1);
}

void	free_stack(t_stack *stack)
{
	t_stack	*ptr;
	t_stack	*temp;

	if (!stack->next)
		return ;
	temp = stack->next;
	while (temp != NULL)
	{
		ptr = temp;
		temp = temp->next;
		free(ptr);
	}
	stack->next = NULL;
}
