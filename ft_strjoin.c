/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:39:17 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/12/06 14:42:10 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const s1[], char const s2[])
{
	size_t	len1 = ft_strlen(s1);
	size_t	len2 = ft_strlen(s2);
	char	*dest = ft_calloc(len1 + len2 + 1, sizeof(char));

	if (!dest)
		return (0);
	ft_strlcpy(dest, s1, len1 + 1);
	ft_strlcpy(dest + len1, s2, len1 + len2 + 1);
	return (dest);
}
