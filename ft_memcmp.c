/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 00:13:08 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 00:30:50 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	unsigned char *s1_p;
	unsigned char *s2_p;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	s1_p = (unsigned char *)s1;
	s2_p = (unsigned char *)s2;
	while (n - i > 0)
	{
		if (s1_p[i] != s2_p[i])
		{
			return ((int)(s1_p[i] - s2_p[i]));
		}
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int main()
{
	char str1[5] = "abc5";
	char str2[5] = "abc8";
	char str3[5] = "abc1";
	
	printf("or: %d\n", memcmp(str1, str2, 3));
	printf("ft: %d\n", ft_memcmp(str1, str2, 3));
	printf("or: %d\n", memcmp(str1, str2, 4));
	printf("ft: %d\n", ft_memcmp(str1, str2, 4));
	printf("or: %d\n", memcmp(str1, str3, 4));
	printf("ft: %d\n", ft_memcmp(str1, str3, 4));
}
