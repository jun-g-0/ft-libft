/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:26:32 by jungao            #+#    #+#             */
/*   Updated: 2021/05/18 17:33:47 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <ctype.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char test1 = 'a';
	char test2 = '5';

	int result = isdigit(test1);
	int result2 = isdigit('5');

	printf("%d, %d", result, result2);
	return 0;
}

