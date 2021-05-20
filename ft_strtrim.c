/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:18:32 by jungao            #+#    #+#             */
/*   Updated: 2021/05/20 22:24:38 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int		my_includes(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	while (s1[start] != '\0' && my_includes(s1[start], set))
		start++;
	end = (int)ft_strlen(s1);
	while (end > start && my_includes(s1[end - 1], set))
		end--;
	new_str = malloc(sizeof(char) * (end - start + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i + start < end)
	{
		new_str[i] = s1[i + start];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

static int	my_includes(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
