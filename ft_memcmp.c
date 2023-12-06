/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:01:00 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/12/06 14:33:54 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char const	*addr1 = s1;
	unsigned char const	*addr2 = s2;

	if (n == 0)
		return (0);
	while (--n)
	{
		if (*addr1 != *addr2)
			break ;
		addr1++;
		addr2++;
	}
	return (*addr1 - *addr2);
}
