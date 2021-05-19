/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:18:32 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 13:41:01 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int		my_include(char c, char const *set);
static size_t	my_strlen(const char *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		start;
	int		j;
	int		k;

	start = 0;
	while (my_include(s1[start], set))
		start++;
	j = my_strlen(s1) - 1;
	while (my_include(s1[j], set))
		j--;
	if (!(new_str = malloc(sizeof(char) * ((j - start + 1) + 1))))
		return (NULL);
	k = 0;
	while (k + start < j + 1)
	{
		new_str[k] == s1[k + start];
		k++;
	}
	new_str[k] = '\0';
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
