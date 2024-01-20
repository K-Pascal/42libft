/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:45:19 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 17:00:48 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

	if (lst == NULL)
		return (NULL);
	t_list	*first = ft_lstnew(f(lst->content));
	if (first == NULL)
		return (NULL);
	t_list	*newlist = first;
	lst = lst->next;
	while (lst != NULL)
	{
		newlist->next = ft_lstnew(f(lst->content));
		if (newlist->next == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		lst = lst->next;
		newlist = newlist->next;
	}
	return (first);
}
