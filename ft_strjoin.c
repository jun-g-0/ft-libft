/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:07:59 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 14:53:58 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	my_strlen(const char *s);
static void		*my_memcpy(void *dest, const void *src, size_t n);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		s1_l;
	int		s2_l;

	s1_l = my_strlen(s1);
	s2_l = my_strlen(s2);
	new_str = malloc(sizeof(char) * (s1_l + s2_l + 1));
	if (!new_str)
	{
		return (NULL);
	}
	my_memcpy(new_str, s1, s1_l);
	my_memcpy(&new_str[s1_l], s2, s2_l);
	new_str[(s1_l + s2_l)] = '\0';
	return (new_str);
}

static size_t	my_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	return (n);
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
