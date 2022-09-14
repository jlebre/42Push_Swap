/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/14 19:08:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_a()
{
	static t_stack	a;

	return (&a);
}

t_stack	*stack_b()
{
	static t_stack	b;

	return (&b);
}

int	main(int argc, char **argv)
{
	t_stack	*temp;
	
	if (argc < 2)
		ft_error ();
	if (!check(++argv))
		ft_red("Error\n");
	else if (!check_is_sorted())
	{
		temp = stack_a()->next;
		while (temp != NULL)
		{
			ft_printf("%d ----- %d\n", temp->content, temp->nb);
			temp = temp->next;
		}
		if ((argc - 1) <= 5)
			sort_small();
		else if ((argc - 1) > 5)
			sort_big();
	}
	temp = stack_a()->next;
	while (temp != NULL)
	{
		ft_printf("%d ----- %d\n", temp->content, temp->nb);
		temp = temp->next;
	}
	check_is_sorted();
	free_stack(stack_a());
	free_stack(stack_b());
	return (0);
}

/*
	print_stack();
	pb();
	print_stack();
	ra();
	print_stack();
	pa();
	print_stack();
	rra();
	print_stack();
	sa();
	print_stack();
*/