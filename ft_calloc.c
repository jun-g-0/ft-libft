/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:08:41 by jungao            #+#    #+#             */
/*   Updated: 2021/05/20 00:34:14 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static void	my_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*new_ptr;
	size_t	c_size;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	c_size = count * size;
	if (c_size / count != size)
	{
		return (NULL);
	}
	new_ptr = malloc(c_size);
	if (!new_ptr)
	{
		return (NULL);
	}
	my_bzero(new_ptr, c_size);
	return (new_ptr);
}

static void	my_bzero(void *s, size_t n)
{
	unsigned char	*dst;
	int				i;

	dst = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		dst[i] = 0;
		i++;
		n--;
	}
}

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main()
{
	for (size_t i = LONG_MAX - 1; i < LONG_MAX; i++)
	{
		for (size_t j = LONG_MAX - 1; j < LONG_MAX; j++)
		{
			printf("i = %zu, j = %zu\n", i, j);
			char *result1 = calloc(i, j);
			char *result2 = ft_calloc(i, j);
			printf("o = %p, f = %p\n", result1, result2);
			printf("o = %d%d%d%d%d\n", result1[0], result1[1], result1[2], result1[3], result1[4]);
			printf("f = %d%d%d%d%d\n", result2[0], result2[1], result2[2], result2[3], result2[4]);
		}
	}
}
