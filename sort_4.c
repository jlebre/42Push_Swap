/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:13:38 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 18:34:34 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4_2(void)
{
	pb();
	sort_3();
	pa();
}

void	sort_4_1(int i)
{
	if (i == 0)
		sort_4_2();
	else if (i == 1)
	{
		sa();
		sort_4_2();
	}
	else if (i == 2)
	{
		ra();
		ra();
		sort_4_2();
	}
	else
	{
		rra();
		sort_4_2();
	}
}

void	sort_4(void)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = stack_a()->next;
	while (temp->nb != 0)
	{
		temp = temp->next;
		i++;
	}
	sort_4_1(i);
}
