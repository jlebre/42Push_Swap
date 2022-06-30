/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 17:10:34 by admin             #+#    #+#             */
/*   Updated: 2022/06/24 20:49:40 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int     i;
    t_la    *list_a;

    i = 0;
    if (argc < 2)
        return (0);
    if (argc >= 2)
    {
        while (i < argc)
        {
            list_a = (struct t_la*)malloc(sizeof(int));
            list_a->next = (char *)malloc(ft_strlen(argv[i]));
            ft_strcpy(list_a->next, argv[i]);
            list_a->next = NULL;
            ft_printf("%d\n", list_a);
            i++;
        }
    }
    return (0);
}
