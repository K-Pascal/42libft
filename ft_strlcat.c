/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:32:23 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/08 15:07:38 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char dst[], const char src[], unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	j;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (len_d < size)
	{
		j = 0;
		while (src[j] != '\0')
		{
			if (j + len_d + 1 >= size)
				break ;
			dst[len_d + j] = src[j];
			j++;
		}
		dst[len_d + j] = '\0';
		return (len_d + len_s);
	}
	return (size + len_s);
}
