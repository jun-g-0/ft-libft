/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:33:50 by jungao            #+#    #+#             */
/*   Updated: 2021/05/17 15:27:29 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	my_strlen(const char *s);
static void	*my_memcpy(void *dest, const void *src, size_t n);

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = my_strlen(dst);
	srclen = my_strlen(src);
	if (dstsize >= dstlen + srclen + 1)
	{
		my_memcpy(dst + dstlen, src, srclen + 1);
		return (dstlen + srclen);
	}
	else if (dstsize >= dstlen + 1)
	{
		my_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
		dst[dstsize - 1] = '\0';
		return (dstlen + (dstsize - dstlen - 1));
	}
	else
	{
		return (dstsize + srclen);
	}
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
