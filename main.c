/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:35:42 by jungao            #+#    #+#             */
/*   Updated: 2021/05/14 17:33:25 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void main()
{
	char str[7] = "string";
	printf("%s\n", str);

	memset(&str, 104, 50);
	printf("%s\n", str);

	char str2[7] = "string";
	printf("%s\n", str2);

	ft_memset(&str2, 105, 50);
	printf("%s\n", str2);
}

// void main()
// {
// 	char str[7] = "string";
// 	printf("%s\n", str);

// 	memset(&str, 104, 50);
// 	printf("%s\n", str);

// 	char str2[7] = "string";
// 	printf("%s\n", str2);

// 	ft_memset(&str2, 105, 50);
// 	printf("%s\n", str2);
// }
