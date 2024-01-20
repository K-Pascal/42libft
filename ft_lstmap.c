/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:45:19 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 18:11:19 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (lst == NULL)
		return (NULL);
	void *content = f(lst->content);
	t_list	*first = ft_lstnew(content);
	if (first == NULL)
		goto failed;
	t_list	*newlist = first;
	lst = lst->next;
	while (lst != NULL)
	{
		content = f(lst->content);
		newlist->next = ft_lstnew(content);
		if (newlist->next == NULL)
			goto failed;
		lst = lst->next;
		newlist = newlist->next;
	}
	goto success;
failed:
	del(content);
	ft_lstclear(&first, del);
success:
	return (first);
}
