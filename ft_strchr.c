/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:36:30 by jungao            #+#    #+#             */
/*   Updated: 2021/05/17 18:44:07 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return (s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return (s[i]);
	}
	return (NULL);
}
