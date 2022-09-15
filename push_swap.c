/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 20:14:49 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_a(void)
{
	static t_stack	a;

	return (&a);
}

t_stack	*stack_b(void)
{
	static t_stack	b;

	return (&b);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (!check(++argv))
		ft_printf("Error\n");
	else if (!check_is_sorted())
	{
		if ((argc - 1) <= 5)
			sort_small();
		else if ((argc - 1) > 5)
			sort_big();
		check_is_sorted();
	}
	free_stack(stack_a());
	free_stack(stack_b());
	return (0);
}
