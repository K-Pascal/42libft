/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:33:38 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 15:37:09 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strdup(char const s[])
{
	size_t	len = ft_strlen(s);
	char	*dest = malloc((len + 1) * sizeof(char));

	if (dest)
		ft_strlcpy(dest, s, len + 1);
	return (dest);
}
