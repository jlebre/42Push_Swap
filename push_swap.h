/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 17:09:36 by admin             #+#    #+#             */
/*   Updated: 2022/06/20 19:50:39 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"
# define INT_MAX    2147483647
# define INT_MIN    -2147483648

typedef struct s_la
{
	int				content;
	struct s_la 	*next;
	struct s_la 	*prev;
}		t_la;

//COLORS
int	ft_red(char *str);
int	ft_red(char *str);
int	ft_yellow(char *str);

#endif