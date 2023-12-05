/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:56:36 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/10 15:30:57 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	if (lst == NULL || del == NULL)
		return ;
	last = ft_lstlast(*lst);
	while (last != NULL)
	{
		del(last->content);
		free(last);
		last = ft_lstlast(*lst);
	}
	*lst = NULL;
}
