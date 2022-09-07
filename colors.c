/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:48:48 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/07 16:13:06 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_red(char *str)
{
	return (ft_printf("\033[0;31m%s\033[0m", str));
}

int	ft_green(char *str)
{
	return (ft_printf("\033[0;32m%s\033[0m", str));
}

int	ft_yellow(char *str)
{
	return (ft_printf("\033[0;33m%s\033[0m", str));
}
