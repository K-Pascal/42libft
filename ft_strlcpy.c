/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:14:24 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/06 18:13:51 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char dst[], const char src[], unsigned int size)
{
	unsigned int	i;

	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0')
		{
			if (i >= size - 1)
				break ;
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
