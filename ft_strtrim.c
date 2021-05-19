/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:18:32 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 13:52:08 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int		my_include(char c, char const *set);
static size_t	my_strlen(const char *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		start;
	int		end;
	int		i;

	start = 0;
	while (my_include(s1[start], set))
		start++;
	end = my_strlen(s1) - 1;
	if (my_strlen(s1) == 0)
		end = 0;
	while (my_include(s1[end], set))
		end--;
	if (!(new_str = malloc(sizeof(char) * ((end - start + 1) + 1))))
		return (NULL);
	i = 0;
	while (i + start < end + 1)
	{
		new_str[i] = s1[i + start];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

static int	my_include(char c, char const *set)
{
	int	i;

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
