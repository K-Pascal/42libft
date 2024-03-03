/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:15:24 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/03 03:16:19 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

char	*ft_strnstr(char const big[], char const little[], size_t len)
{
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	size_t const	len_l = ft_strlen(little);
	while (*big != '\0' && len-- >= len_l)
	{
		if (ft_strncmp(big, little, len_l) == 0)
			return ((char *)big);
		++big;
	}
	return (NULL);
}
