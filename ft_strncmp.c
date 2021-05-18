/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:37:54 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 00:48:05 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (n == 0)
	{
		return ((unsigned char)0);
	}
	i = 0;
	while (n - i > 0 && s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (n == 0)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return ((unsigned char)0);
}


#include <string.h>
#include <stdio.h>
int main()
{
	char str1[5] = "abc5";
	char str2[5] = "abc8";
	char str3[5] = "";

	printf("or: %d\n", strncmp(str1, str2, 3));
	printf("ft: %d\n", ft_strncmp(str1, str2, 3));
	printf("or: %d\n", strncmp(str1, str2, 4));
	printf("ft: %d\n", ft_strncmp(str1, str2, 4));
	printf("or: %d\n", strncmp(str1, str3, 4));
	printf("ft: %d\n", ft_strncmp(str1, str3, 4));
}