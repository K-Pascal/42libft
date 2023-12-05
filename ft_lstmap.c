/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:45:19 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/10 16:11:13 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	void	*value;

	if (lst == NULL || f == NULL | del == NULL)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		value = f(lst->content);
		if (value != NULL)
		{
			ft_lstadd_back(&newlist, ft_lstnew(value));
			del(lst->content);
		}
		lst = lst->next;
	}
	return (newlist);
}
