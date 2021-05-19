/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:44:49 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 20:04:15 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static void	my_rec_ptnbr(int n, int fd);
static int	my_abs(int n);

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
	}
	else
	{
		my_rec_ptnbr(n, fd);
	}
}

static void	my_rec_ptnbr(int n, int fd)
{
	char	mod;

	if (n != 0)
	{
		mod = (char)(my_abs(n % 10) + '0');
		n = n / 10;
		my_rec_ptnbr(n, fd);
		ft_putchar_fd(mod, fd);
	}
}

static int	my_abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
