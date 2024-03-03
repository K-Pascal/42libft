/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:01:00 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/03 03:12:59 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	if (n == 0)
		return (0);
	unsigned char const	*addr1 = s1;
	unsigned char const	*addr2 = s2;
	while (--n != 0)
	{
		if (*addr1 != *addr2)
			break ;
		++addr1;
		++addr2;
	}
	return (*addr1 - *addr2);
}
