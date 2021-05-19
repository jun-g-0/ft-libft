/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:15:18 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 21:10:57 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	my_strlen(const char *s);

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
		while (len - (i + j) > 0 && haystack[(i + j)] == needle[j])
		{
			j++;
			if (j == (int)my_strlen(needle))
			{
				return ((char *)(haystack + i));
			}
		}
		i++;
	}
	return (NULL);
}

static size_t	my_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	return (n);
}
