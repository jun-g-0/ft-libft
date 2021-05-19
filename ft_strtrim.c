/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:18:32 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 14:10:23 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int		my_include(char c, char const *set);
static size_t	my_strlen(const char *s);
static void		*my_memcpy(void *dest, const void *src, size_t n);
static char		*my_strdup(const char *s1);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		start;
	int		end;
	int		i;

	if (my_strlen(s1) == 0)
		return (new_str = my_strdup(""));
	start = 0;
	while (my_include(s1[start], set))
		start++;
	end = my_strlen(s1) - 1;
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

static char	*my_strdup(const char *s1)
{
	char *new_str;

	new_str = malloc(sizeof(char) * (my_strlen(s1) + 1));
	if (!new_str)
	{
		return (NULL);
	}
	my_memcpy(new_str, s1, (my_strlen(s1) + 1));
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

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	printf("%d, %s\n", argc, argv[0]);
// 	char *str1 = "";
// 	char *str2 = " ";
	
// 	char *result = ft_strtrim(str1, str2);
// 	printf("%s\n", result);
// 	printf("%p\n", result);
// 	printf("%d%d\n", (int)result[0], (int)result[1]);
// 	return 0;
// }
