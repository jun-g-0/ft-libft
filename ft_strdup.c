/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:30:32 by jungao            #+#    #+#             */
/*   Updated: 2021/05/20 20:28:36 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_str;

	new_str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!new_str)
	{
		return (NULL);
	}
	ft_memcpy(new_str, s1, (ft_strlen(s1) + 1));
	return (new_str);
}
