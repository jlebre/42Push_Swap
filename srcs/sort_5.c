/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:16:56 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 18:54:02 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5_3(void)
{
	pb();
	sort_3();
	pa();
	pa();
}

void	sort_5_2(int j)
{
	if (j == 0)
		sort_5_3();
	else if (j == 1)
	{
		sa();
		sort_5_3();
	}
	else if (j == 2)
	{
		ra();
		ra();
		sort_5_3();
	}
	else
	{
		rra();
		sort_5_3();
	}
}

void	sort_5_1(int i)
{
	if (i == 0)
		pb();
	else if (i == 1)
	{
		sa();
		pb();
	}
	else if (i == 2)
	{
		ra();
		ra();
		pb();
	}
	else if (i == 3)
	{
		rra();
		rra();
		pb();
	}
	else
	{
		rra();
		pb();
	}
}

void	sort_5(void)
{
	int		i;
	int		j;
	t_stack	*temp;
	t_stack	*temp2;

	i = 0;
	j = 0;
	temp = stack_a()->next;
	while (temp->nb != 0)
	{
		temp = temp->next;
		i++;
	}
	sort_5_1(i);
	temp2 = stack_a()->next;
	while (temp2->nb != 1)
	{
		temp2 = temp2->next;
		j++;
	}
	sort_5_2(j);
}
