/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:41:12 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/03 18:02:01 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	unsigned char		*a_dest = dest;
	unsigned char const	*a_src = src;
	if (dest > src)
	{
		while (n-- != 0)
			a_dest[n] = a_src[n];
	}
	else if (dest < src)
		ft_memcpy(dest, src, n);

	return (dest);
}
