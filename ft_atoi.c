/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:58:38 by jungao            #+#    #+#             */
/*   Updated: 2021/05/18 23:15:52 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int			my_isdigit(int c);
int			my_isspace(char c);
long int	overflow(char c, long int *result, int sign);

int	ft_atoi(const char *nptr)
{
	int			sign;
	long int	result;

	sign = 1;
	result = 0;
	while (my_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (my_isdigit(*nptr))
	{
		if (overflow(*nptr, &result, sign))
		{
			return ((int)overflow(*nptr, &result, sign));
		}
		nptr++;
	}
	return ((int)(result * sign));
}

int	my_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	my_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
	{
		return (1);
	}
	else if (c == '\f' || c == '\r' || c == ' ')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

long int	overflow(char c, long int *result, int sign)
{
	long int	ov_div;
	long int	ov_mod;

	if (sign > 0)
	{
		ov_div = LONG_MAX / 10;
		ov_mod = LONG_MAX % 10;
		if (*result > ov_div || (*result == ov_div && (int)(c - '0') > ov_mod))
			return (LONG_MAX);
	}
	else
	{
		ov_div = ((LONG_MIN / 10) * sign);
		ov_mod = ((LONG_MIN % 10) * sign);
		if (*result > ov_div || (*result == ov_div && (int)(c - '0') > ov_mod))
			return (LONG_MIN);
	}
	*result = *result * 10 + ((long int)(c - '0') * sign);
	return (0);
}

int	main()
{
	char strs[14][30] = {
		"   0.",
		"   100.",
		"   +2147483647.",
		"   -2147483648.",
		"   +21474836470.",
		"   -21474836480.",
		"   +214748364700.",
		"   -214748364800.",
		"   +9223372036854775807.",
		"   -9223372036854775808.",
		"   +92233720368547758070.",
		"   -92233720368547758080.",
		"   +922337203685477580700.",
		"   -922337203685477580800."
	};
	for (size_t i = 0; i < 14; i++)
	{
		int result1 = ft_atoi(strs[i]);
		int result2 = atoi(strs[i]);
		printf("%d\n", result1);
		printf("%d\n", result2);
		printf("%d\n\n", result1 == result2);
	}
}
