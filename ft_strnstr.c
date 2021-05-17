/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:15:18 by jungao            #+#    #+#             */
/*   Updated: 2021/05/18 02:24:47 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	i = 0;
	while (len - i > 0 && haystack[i] != '\0')
	{
		j = 0;
		while (len - (i + j) > 0 && haystack[i + j] == needle[j])
		{
			if (j == (int)ft_strlen(needle))
			{
				return ((char *)(haystack + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	// ft_strnstr
// 	printf("\n---ft_strnstr\n");
// 	char str19[7] = "string";
// 	char str20[3] = "tr";

// 	char *result6 = ft_strnstr(str19, str20, (size_t)7);
// 	printf("%s\n", result6);
// }