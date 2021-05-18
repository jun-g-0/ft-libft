/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:37:54 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 01:04:39 by jungao           ###   ########.fr       */
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
	while (n - i > 0 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (n - i == 0)
	{
		return ((unsigned char)0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <string.h>
#include <stdio.h>

int main()
{
	char str1[5] = "ab";
	char str2[5] = "abc";
	char str3[5] = "";

	for (size_t i = 0; i < 5; i++)
	{
		printf("or: %d\n", strncmp(str1, str2, i));
		printf("ft: %d\n", ft_strncmp(str1, str2, i));
		printf("or: %d\n", strncmp(str1, str3, i));
		printf("ft: %d\n", ft_strncmp(str1, str3, i));
	}
}