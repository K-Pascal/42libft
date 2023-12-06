/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:14:24 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/12/06 14:44:01 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char dst[], const char src[], size_t size)
{
	size_t	len_s = 0;

	while (*src)
	{
		if (++len_s < size)
			*(dst++) = *src;
		src++;
	}
	if (size)
		*dst = '\0';
	return (len_s);
}
