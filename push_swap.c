/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/11 18:43:38 by jlebre           ###   ########.fr       */
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
	if (argc < 2)
		ft_error ();
	if (!check(++argv))
    ft_red("Error\n");
  else if (!check_is_sorted())
    ft_green("Arguments are valid!\n");
  free_stack(stack_a());
	free_stack(stack_b());
  return (0);
}

//parsing

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