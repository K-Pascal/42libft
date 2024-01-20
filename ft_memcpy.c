/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:35:50 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 15:31:57 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	unsigned char		*a_dest = dest;
	unsigned const char	*a_src = src;

	while (n--)
	{
		*a_dest = *a_src;
		a_dest++;
		a_src++;
	}
	return (dest);
}
