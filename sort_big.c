/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:21:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/12 12:54:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_big()
{
    int bit;
    int i;
    t_stack *temp;

    temp = stack_a()->next;
    bit = 0;
    i = 0;
    while (bit < 8)
    {
        temp = stack_a()->next;
        while (temp)
        {
            if (temp->nb & (1 << bit))
            {
                pb();
                i++;
            }
            else
                ra();
            temp = temp->next;
        }
        while (i > 0)
        {
            pa();
            i--;
        }
        bit++;
    }
    ft_printf("Sort Big!\n");
}

/*
00000000
00000001
00000100
00000010
00000101
00000011
00000110
*/
/*
Radix Sort with Binary

Começa na direita

00000000
			 *
Vai vendo todos os números e confirma se é 0 ou 1
Se for 1
Rotate a
Se for 0
Push B

Passa 1 casa para a esquerda <<

00000000
			*

Faz o mesmo processo
Até acabar o número

00000000
		 *

00000000
		*

00000000
	 *

00000000
	*

00000000
 *

00000000
*

if ((num >> i) & 1 == 1)
	rotate A


Só preciso de:
Rotate a
Push a
Push b
*/