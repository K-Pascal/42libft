/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:32:23 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 15:39:22 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

size_t	ft_strlcat(char dst[], char const src[], size_t size)
{
	size_t	len_d = ft_strlen(dst);

	if (len_d < size)
	{
		dst += len_d;
		while (*src)
		{
			if (++len_d < size)
				*(dst++) = *src;
			src++;
		}
		*dst = '\0';
		return (len_d);
	}
	return (size + ft_strlen(src));
}
