/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:21:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 16:45:28 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_of_stack(void)
{
	int		size;
	t_stack	*temp;

	size = 0;
	temp = stack_a()->next;
	while (temp)
	{
		if (temp->nb > size)
			size = temp->nb;
		temp = temp->next;
	}
	return (size + 1);
}

void	sort_big(void)
{
	int		bit;
	int		i;
	int		j;
	int		size;
	int		max_bits;
	t_stack	*temp;

	bit = 0;
	max_bits = 1;
	size = size_of_stack();
	i = 0;
	while (size >> max_bits != 0)
		max_bits++;
	while (bit < max_bits)
	{
		j = 0;
		while (j < size)
		{
			temp = stack_a()->next;
			if (temp->nb >> bit & 1)
				ra();
			else
			{
				pb();
				i++;
			}
			j++;
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