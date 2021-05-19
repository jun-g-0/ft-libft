/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:08:41 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 10:44:32 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	my_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void		*result;
	size_t		i;

	i = 0;
	if (!(result = malloc(count * size)))
		return (NULL);
	my_bzero(result, count * size);
	return (result);
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
