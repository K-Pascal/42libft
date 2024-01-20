/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:15:06 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 17:01:48 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count = 0;

	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
