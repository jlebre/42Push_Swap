/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/07 18:15:14 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	if (argc < 2)
		ft_error ;
	if (!check(argc, argv, 0))
		ft_error();
	return (0);
}

int	check(int argc, char **argv, int i)
{
	while (i < argc) 
	{
		if (!ft_isdigit((int)argv[i]))
			return (0);
	}
	return (1);
}

//parsing