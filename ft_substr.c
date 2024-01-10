/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:24:18 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/10 15:33:33 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

#include "libft.h"

char	*ft_substr(char const s[], unsigned int start, size_t len)
{
	if (!len)
		return (ft_strdup(""));

	size_t	len_s = ft_strlen(s);
	if (start + len > len_s)
	{
		if (len_s < start)
			len = 0;
		else
			len = len_s - start;
	}
	char	*str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (!len)
		str[0] = '\0';
	else
		ft_strlcpy(str, s + start, len + 1);
	return (str);
}
