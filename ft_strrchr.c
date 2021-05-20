/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:55:31 by jungao            #+#    #+#             */
/*   Updated: 2021/05/20 22:21:42 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*save;

	i = 0;
	save = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			save = (char *)(&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)(&s[i]));
	}
	return (save);
}
