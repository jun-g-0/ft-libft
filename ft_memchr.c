/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 11:25:03 by jungao            #+#    #+#             */
/*   Updated: 2021/05/17 11:43:14 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dst;
	int				i;

	dst = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if (dst[i] == (unsigned char)c)
		{
			return (dst + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
