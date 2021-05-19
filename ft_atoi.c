/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:58:38 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 23:48:00 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
static int			my_isdigit(int c);
static int			my_isspace(char c);
static long int		overflow(char c, long int *result, int sign);

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
	return ((int)result);
}

static int	my_isdigit(int c)
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

static int	my_isspace(char c)
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

static long int	overflow(char c, long int *result, int sign)
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
		ov_div = LONG_MIN / 10;
		ov_mod = ((LONG_MIN % 10) * sign);
		if (*result < ov_div || (*result == ov_div && (long int)(c - '0') > ov_mod))
			return (LONG_MIN);
	}
	*result = *result * 10 + (sign * (long int)(c - '0'));
	return (0);
}

#include <stdio.h>

int	main()
{
	char strs[5][30] = {
		"   -9223372036854775808.",
		"   -9223372036854775809.",
		"   -9223372036854775810.",
		"   -9223372036854775900.",
		"   -92233720368547758080."
	};
	for (size_t i = 0; i < 5; i++)
	{
		int result1 = ft_atoi(strs[i]);
		int result2 = atoi(strs[i]);
		printf("%d\n", result1);
		printf("%d\n", result2);
		printf("%d\n\n", result1 == result2);
	}
}