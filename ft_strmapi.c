/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:05:00 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/11 17:09:12 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

char	*ft_strmapi(char const s[], char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;
	size_t	len;

	if (s == 0 || f == 0)
		return (0);
	len = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
