/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:50:55 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 21:54:29 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL)
	{
		return (NULL);
	}
	if (lst[0] == NULL)
	{
		return (NULL);
	}
	tmp = lst[0];
	if (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}
