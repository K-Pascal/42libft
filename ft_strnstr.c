/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:15:24 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/12/06 15:29:07 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

char	*ft_strnstr(const char big[], const char little[], size_t len)
{
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);

	size_t	len_l = ft_strlen(little);
	while (*big != '\0')
	{
		if (len-- < len_l)
			break ;
		if (!ft_strncmp(big, little, len_l))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
