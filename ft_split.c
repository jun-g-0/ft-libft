/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:56:16 by jungao            #+#    #+#             */
/*   Updated: 2021/05/20 22:49:00 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	my_count_p(char const *s, char c);
static char		*my_input(char const *s, char c, size_t *i);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	result = malloc(sizeof(char *) * (1 + my_count_p(s, c)));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < my_count_p(s, c))
	{
		result[j] = my_input(s, c, &i);
		if (result[j] == NULL)
		{
			while (j > 0)
				free(result[--j]);
			free(result);
			return (NULL);
		}
		j++;
	}
	result[j] = NULL;
	return (result);
}

static size_t	my_count_p(char const *s, char c)
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
		{
			i++;
		}
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			count++;
		}
	}
	return (count);
}

static char	*my_input(char const *s, char c, size_t *i)
{
	size_t	count;
	char	*s_str;
	size_t	j;

	count = 0;
	while (s[*i] == c && s[*i] != '\0')
		*i += 1;
	while (s[*i] != c && s[*i] != '\0')
	{
		count++;
		*i += 1;
	}
	s_str = malloc(sizeof(char) * (count + 1));
	if (s_str == NULL)
		return (NULL);
	s_str[count] = '\0';
	j = 0;
	while (count > j)
	{
		s_str[count - j - 1] = s[*i - j - 1];
		j++;
	}
	return (s_str);
}
