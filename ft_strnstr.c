/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:15:18 by jungao            #+#    #+#             */
/*   Updated: 2021/05/20 22:41:41 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	i = 0;
	while (len > i && haystack[i] != '\0')
	{
		j = 0;
		while ((len > (i + j)) && haystack[i + j] == needle[j])
		{
			j++;
			if (j == ft_strlen(needle))
			{
				return ((char *)(&haystack[i]));
			}
		}
		i++;
	}
	return (NULL);
}
