/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:24:18 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/03 18:10:05 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_substr(char const s[], unsigned int start, size_t len)
{
	if (len == 0)
		return (ft_strdup(""));

	size_t const len_s = ft_strlen(s);
	if ((size_t)start + len > len_s)
	{
		if (start >= len_s)
			return (ft_strdup(""));
		len = len_s - start;
	}

	char *str = malloc((len + 1) * sizeof(char));
	if (str != NULL)
		ft_strlcpy(str, s + start, len + 1);

	return (str);
}
