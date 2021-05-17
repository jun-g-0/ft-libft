/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 00:33:24 by jungao            #+#    #+#             */
/*   Updated: 2021/05/17 00:40:57 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_c;
	unsigned char	*src_c;
	int				i;

	dest_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;
	i = 0;
	if (dest == NULL || src == NULL)
	{
		return (dest);
	}
	while (n > 0)
	{
		dest_c[i] = src_c[i];
		i++;
		n--;
	}
	return (dest);
}
