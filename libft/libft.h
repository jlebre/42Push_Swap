/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:33:21 by jlebre            #+#    #+#             */
/*   Updated: 2022/09/15 20:34:41 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

//MANDATORY

int			ft_strlen(const char *str);
int			ft_atoi(const char *str);
long long	ft_atol(const char *str);
int			ft_isdigit(int i);

//FT_PRINTF

int			ft_printf(const char *c, ...);
int			ft_strlen_pf(const char *str);
int			ft_strchr_pf(const char *s, int c);
int			ft_putchar_fd_pf(char c, int fd);
int			ft_putstr_fd_pf(char *s, int fd);
int			ft_putnbr_fd_pf(int n, int k, int fd);
int			ft_putnbr_base_fd(unsigned int n, char *base, int k, int fd);
int			ft_putnbr_p_fd(unsigned long n, char *base, int k, int fd);
int			ft_putpointer_fd(unsigned long ptr, int fd);
int			ft_unsigned(unsigned int nb, int fd);

#endif
