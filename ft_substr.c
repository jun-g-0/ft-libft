/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:55:39 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 11:36:05 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static void		*my_memcpy(void *dest, const void *src, size_t n);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new_str;

	if (!(new_str = malloc(sizeof(char) * len + 1)));
	{
		return (NULL);
	}
	my_memcpy(new_str, &s[start], len);
	new_str[len] = '\n';
	return (new_str);
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
