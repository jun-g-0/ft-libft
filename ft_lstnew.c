/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:19:58 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 21:30:39 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_ele;

	new_ele = (t_list *)malloc(sizeof(t_list));
	if (new_ele == NULL)
		return (NULL);
	new_ele -> content = content;
	new_ele -> next = NULL;
	return (new_ele);
}
