/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:58:38 by jungao            #+#    #+#             */
/*   Updated: 2021/05/20 22:00:42 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
static long int		overflow(char c, long int *result, int sign);

int	ft_atoi(const char *nptr)
{
	int			sign;
	long int	result;

	sign = 1;
	result = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		if (overflow(*nptr, &result, sign))
		{
			return ((int)overflow(*nptr, &result, sign));
		}
		nptr++;
	}
	return ((int)result);
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
		if (*result < ov_div || (*result == ov_div && (int)(c - '0') > ov_mod))
			return (LONG_MIN);
	}
	*result = *result * 10 + (sign * (long int)(c - '0'));
	return (0);
}
