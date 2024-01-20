/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:05:00 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 16:03:40 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

char	*ft_strmapi(char const s[], char (*f)(unsigned int, char))
{
	size_t	len = ft_strlen(s);
	char	*dest = ft_calloc(len + 1, sizeof(char));

	if (dest == NULL)
		return (NULL);
	for (unsigned int i = 0; i < len; i++)
		dest[i] = f(i, *(s++));
	return (dest);
}
