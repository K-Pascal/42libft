/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:14:24 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/03 18:04:02 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

size_t	ft_strlcpy(char dst[], char const src[], size_t size)
{
	if (size == 0)
		return (ft_strlen(src));

	char const *start = src;
	while (--size != 0 && *src != '\0')
		*(dst++) = *(src++);
	*dst = '\0';

	while (*src != '\0')
		++src;

	return (src - start);
}
