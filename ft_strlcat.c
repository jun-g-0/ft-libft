/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:33:50 by jungao            #+#    #+#             */
/*   Updated: 2021/05/20 20:20:44 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize >= dstlen + srclen + 1)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
		return (srclen + dstlen);
	}
	else if (dstsize >= dstlen + 1)
	{
		ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
		dst[dstsize - 1] = '\0';
		return (srclen + dstlen);
	}
	else
	{
		return (srclen + dstsize);
	}
}
