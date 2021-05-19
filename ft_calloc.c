/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:08:41 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 10:44:54 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	my_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void *new_ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	new_ptr = malloc(count * size);
	if (!new_ptr)
	{
		return (NULL);
	}
	my_bzero(new_ptr, count * size);
	return (new_ptr);
}

void	my_bzero(void *s, size_t n)
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
