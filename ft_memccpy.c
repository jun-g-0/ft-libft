/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:59:28 by jungao            #+#    #+#             */
/*   Updated: 2021/05/17 11:18:22 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_p;
	unsigned char	*src_p;
	int				i;

	dest_p = (unsigned char *)dest;
	src_p = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		dest_p[i] = src_p[i];
		if (src_p[i] == (unsigned char)c)
		{
			return (dest_p + i + 1);
		}
		i++;
		n--;
	}
	return (NULL);
}
