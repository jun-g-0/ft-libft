/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:39:54 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 18:32:13 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int		my_get_count(int n);

char	*ft_itoa(int n)
{
	char	*result;
	int		count;

	count = my_get_count(n);
	result = malloc(sizeof(char) * (count + 1));
	if (result == NULL)
		return (NULL);
	result[count--] = '\0';
	while (count > 0)
	{
		result[count--] = n % 10;
		n = n / 10;
	}
	return (result);
}

int		my_get_count(int n)
{
	int		num;
	if (n <= 0)
		num++;
	while (n != 0)
	{
		num++;
		n = n / 10;
	}
	return num;
}
