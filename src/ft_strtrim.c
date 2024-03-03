/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:54:12 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/03 18:05:04 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const s1[], char const set[])
{
	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
		++s1;

	char const *start = s1;
	while (*s1 != '\0')
		++s1;
	--s1;

	while (s1 > start && ft_strchr(set, *s1) != NULL)
		--s1;
	++s1;

	return (ft_substr(start, 0, s1 - start));
}
