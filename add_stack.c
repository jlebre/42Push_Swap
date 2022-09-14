/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:32:54 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/14 15:47:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int add_stack(t_stack *stack, int  nbr)
{
    t_stack *ptr;
    t_stack *temp;

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
            break;
        temp = temp->next;
    }
    temp->next = ptr;
    return (1);
}

void    free_stack(t_stack *stack)
{
    t_stack *ptr;
    t_stack *temp;

    temp = stack->next;
    while (temp != NULL)
    {
        ptr = temp;
        temp = temp->next;
        free(ptr);
    }
}
