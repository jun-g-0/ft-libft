/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:39:54 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 18:47:53 by jungao           ###   ########.fr       */
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
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
		result[0] = '-';
	while (n != 0)
	{
		result[count--] = (char)((n % 10) + '0');
		n = n / 10;
	}
	return (result);
}

int		my_get_count(int n)
{
	int		num;
	num = 0;
	if (n <= 0)
		num++;
	while (n != 0)
	{
		num++;
		n = n / 10;
	}
	return num;
}

#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	printf("%d, %s\n", argc, argv[0]);
	int ints[5] = {-623, 156, -0, INT_MAX, INT_MIN};
	
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d: %s\n", ints[i], ft_itoa(ints[i]));
	}
	
	// char *result = ft_substr(str1, 5, 20);
	// printf("%s\n", result);
	return 0;
}
