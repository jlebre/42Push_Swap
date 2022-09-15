/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:21:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 20:14:28 by jlebre           ###   ########.fr       */
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

void	sort_big_1(int i, int j, int bit)
{
	while (j < size_of_stack())
	{
		if (stack_a()->next->nb >> bit & 1)
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
}

void	sort_big(void)
{
	int		bit;
	int		max_bits;

	bit = 0;
	max_bits = 1;
	while (size_of_stack() >> max_bits != 0)
		max_bits++;
	while (bit < max_bits)
	{
		sort_big_1(0, 0, bit);
		bit++;
	}
}
