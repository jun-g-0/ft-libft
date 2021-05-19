/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:42:45 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 21:44:07 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	result;

	if (lst == NULL)
	{
		return (0)
	}
	result = 1;
	if (lst->next != NULL)
	{
		result++;
	}
	return (result);
}
