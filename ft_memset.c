/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 23:33:26 by jungao            #+#    #+#             */
/*   Updated: 2021/05/15 16:44:04 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;
	int				i;

	dst = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		dst[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}

/*
** 1. set dst and i for increase pointer, byte = char's unit.
** 2. inisialize dst from casted b and i from 0
** 3. while loop until len bytes of c were written from original b
** 4. return original address
*/
