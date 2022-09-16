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

void	print_stack(void)
{
	t_stack	*a;
	t_stack	*b;

	a = stack_a()->next;
	b = stack_b()->next;
	ft_printf("-----PUSH SWAP-----\n___________________\n\n  A\n\n");
	while (a != NULL)
	{
		ft_printf("%d\n", a->content);
		a = a->next;
	}
	ft_printf("_____");
	ft_printf("\n\n  B\n\n");
	while (b != NULL)
	{
		ft_printf("%d\n", b->content);
		b = b->next;
	}
	ft_printf("_____\n\n\n\n");
}
