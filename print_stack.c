/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:23:31 by marvin            #+#    #+#             */
/*   Updated: 2022/09/12 12:23:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_stack()
{
    t_stack *a;
    //t_stack *b;

    a = stack_a()->next;
    //b = stack_b()->next;
    ft_printf("-----PUSH SWAP-----\n___________________\n\n  A             B  \n\n");
    while (a != NULL)
    {
        ft_printf("%d\n", a->content);
        a = a->next;
        //b = b->next;
    }
    ft_printf("_____         _____\n\n");
}
/*
        if (b->content)
            ft_printf("             %d\n", b->content);
        else
            ft_printf("\n");


             || b != NULL
            */