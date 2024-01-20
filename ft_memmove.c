/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:41:12 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 15:32:33 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	unsigned char		*a_dest = dest;
	unsigned const char	*a_src = src;

	if (dest > src)
	{
		while (n--)
			a_dest[n] = a_src[n];
	}
	else if (dest < src)
	{
		while (n--)
		{
			*a_dest = *a_src;
			a_dest++;
			a_src++;
		}
	}
	return (dest);
}
