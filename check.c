/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:19:50 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/08 20:37:22 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check(int argc, char **argv)
{
    check_is_sorted(argv);
    check_limits(argv);
    check_duplicates(argv);
    return (1);
}