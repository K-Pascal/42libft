/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:05:00 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 17:11:26 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strmapi(char const s[], char (*f)(unsigned int, char))
{
	size_t	len = ft_strlen(s);
	char	*dest = malloc((len + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);
	dest[len] = '\0';
	for (unsigned int i = 0; i < len; i++, s++)
		dest[i] = f(i, *s);
	return (dest);
}
