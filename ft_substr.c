/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:55:39 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 11:42:22 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	my_strlen(const char *s);
static void		*my_memcpy(void *dest, const void *src, size_t n);
size_t			my_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new_str;

	if (!(new_str = malloc(sizeof(char) * len + 1)))
	{
		return (NULL);
	}
	my_strlcpy(new_str, &s[start], len);
	return (new_str);
}

size_t	my_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	srclen;

	srclen = my_strlen(src);
	if (dstsize > srclen + 1)
	{
		my_memcpy(dst, src, srclen + 1);
	}
	else if (dstsize > 0)
	{
		my_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
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

static void	*my_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_c;
	unsigned char	*src_c;
	int				i;

	dest_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		dest_c[i] = src_c[i];
		i++;
		n--;
	}
	return (dest);
}
