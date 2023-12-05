/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:54:12 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/07 15:13:34 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static int	in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	len_trim(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		if (in_set(s1[i], set))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;
	char			*str;

	size = ft_strlen(s1) - len_trim(s1, set) + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (!in_set(s1[i], set) && j + 1 < size)
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
