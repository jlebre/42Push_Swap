/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:21:05 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 19:10:46 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(void)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*c;

	a = stack_a()->next;
	b = stack_a()->next->next;
	c = stack_a()->next->next->next;
	if (a->nb < c->nb && a->nb < b->nb && c->nb < b->nb)
	{
		rra();
		sa();
	}
	else if (b->nb < a->nb && b->nb < c->nb && a->nb < c->nb)
		sa();
	else if (b->nb < a->nb && b->nb < c->nb && c->nb < a->nb)
		ra();
	else if (c->nb < a->nb && c->nb < b->nb && a->nb < b->nb)
		rra();
	else if (c->nb < a->nb && c->nb < b->nb && b->nb < a->nb)
	{
		ra();
		sa();
	}
}

void	sort_small(void)
{
	int	size;

	size = size_of_stack();
	if (size == 2)
		sa();
	else if (size == 3)
		sort_3();
	else if (size == 4)
		sort_4();
	else if (size == 5)
		sort_5();
}
