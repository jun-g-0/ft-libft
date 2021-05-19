/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:55:39 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 12:04:26 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!(new_str = malloc(sizeof(char) * len + 1)))
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (i >= start && len > j)
		{
			new_str[j] = s[i];
			j++;
		}
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%d, %s\n", argc, argv[0]);
	char *str1 = "01234567890123456789";
	
	char *result = ft_substr(str1, 5, 20);
	printf("%s\n", result);
	return 0;
}
