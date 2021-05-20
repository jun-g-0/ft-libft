/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:07:59 by jungao            #+#    #+#             */
/*   Updated: 2021/05/20 20:50:10 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_l;
	size_t	s2_l;

	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	new_str = malloc(sizeof(char) * (s1_l + s2_l + 1));
	if (!new_str)
	{
		return (NULL);
	}
	ft_memcpy(new_str, s1, s1_l);
	ft_memcpy(&new_str[s1_l], s2, s2_l);
	new_str[s1_l + s2_l] = '\0';
	return (new_str);
}
