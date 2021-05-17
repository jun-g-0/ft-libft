/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:16:51 by jungao            #+#    #+#             */
/*   Updated: 2021/05/17 18:33:02 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_c;
	unsigned char	*src_c;
	int				i;

	dest_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;
	i = 0;
	while (n - i > 0)
	{
		if (dest == NULL && src == NULL)
		{
			return (dest);
		}
		if (dest > src)
		{
			dest_c[n - i - 1] = src_c[n - i - 1];
		}
		else
		{
			dest_c[i] = src_c[i];
		}
		i++;
	}
	return (dest);
}