/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:41:44 by admin             #+#    #+#             */
/*   Updated: 2022/06/24 20:21:12 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

void    sa(int  a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void    sb(int  a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void    sa(int  a, int b, int c, int d)
{
    sa(a, b);
    sb(c, d);
}