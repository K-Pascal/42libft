/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:54:12 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 17:23:27 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const s1[], char const set[])
{
	char const	*start;

	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	start = s1;
	while (*s1 != '\0')
		s1++;
	s1--;
	while (s1 > start && ft_strchr(set, *s1))
		s1--;
	s1++;
	return (ft_substr(start, 0, s1 - start));
}
