/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:39:48 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 16:33:26 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_is_sorted(void)
{
	t_stack	*ptr;
	int		n;

	ptr = stack_a()->next;
	n = -1;
	while (ptr)
	{
		if (n > ptr->nb)
		{
			ft_red("Is not sorted!\n");
			return (0);
		}
		n = ptr->nb;
		ptr = ptr->next;
	}
	ft_green("Is sorted!\n");
	return (1);
}
