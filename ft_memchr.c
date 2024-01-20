/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:42:03 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 15:27:55 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned const char	*addr = s;
	unsigned char		byte = c;

	while (n--)
	{
		if (*addr == byte)
			return ((void *)(addr));
		addr++;
	}
	return (NULL);
}
