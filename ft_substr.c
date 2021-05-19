/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:55:39 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 11:48:33 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	my_strlen(const char *s);
static void		*my_memcpy(void *dest, const void *src, size_t n);
size_t			my_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	int		i;

	i = 0;
	if (!(new_str = malloc(sizeof(char) * len + 1)))
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (i >= start && len - (i - start) > 0)
		{
			new_str[i] = s[i];
		}
	}
	new_str[i] = '\0';
	return (new_str);
}
