/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:39:54 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 18:56:25 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	my_get_count(int n);
static int	my_abs(int n);

char	*ft_itoa(int n)
{
	char	*result;
	int		count;

	count = my_get_count(n);
	result = malloc(sizeof(char) * (count + 1));
	if (result == NULL)
		return (NULL);
	result[count--] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
		result[0] = '-';
	while (n != 0)
	{
		result[count--] = (char)(my_abs(n % 10) + '0');
		n = n / 10;
	}
	return (result);
}

static int	my_get_count(int n)
{
	int		count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
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
