/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 22:36:48 by jungao            #+#    #+#             */
/*   Updated: 2021/05/19 22:58:12 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new_ele;

	new_ele = ft_lstnew(f(lst->content));
	if (new_ele == NULL)
		return (NULL);
	first = new_ele;
	while (lst->next != NULL)
	{
		new_ele = ft_lstnew(f(lst->next->content));
		if (new_ele == NULL)
		{
			ft_lstclear(first, del);
			return (NULL);
		}
		ft_lstlast(first)->next = new_ele;
		lst = lst->next;
	}
	return (first);
}
