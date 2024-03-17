/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:45:19 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/17 19:35:29 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (lst == NULL)
		return (NULL);

	void	*content = f(lst->content);
	t_list	*first = ft_lstnew(content);
	if (first == NULL)
		goto fail;

	t_list *newlist = first;
	while ((lst = lst->next) != NULL)
	{
		content = f(lst->content);
		if ((newlist->next = ft_lstnew(content)) == NULL)
			goto fail;

		newlist = newlist->next;
	}
	goto success;

fail:
	del(content);
	ft_lstclear(&first, del);

success:
	return (first);
}
