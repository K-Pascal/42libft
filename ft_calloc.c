/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:58:35 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/10 19:24:16 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void			*array;
	unsigned long	len;

	if (size != 0 && nmemb > 0b01111111111111111111111111111111 / size)
		return (NULL);
	if (nmemb != 0 && size > 0b01111111111111111111111111111111 / nmemb)
		return (NULL);
	len = nmemb * size;
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}
