/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:23 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/08 20:44:29 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_error ();
	if (check(argc, argv))
		ft_printf("Arguments are valid!\n");
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