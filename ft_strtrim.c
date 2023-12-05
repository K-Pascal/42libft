/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:54:12 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/10 12:24:09 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static int	in_set(char const c, char const set[])
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

static int	len_aftertrim(char const s1[], char const set[])
{
	int	len;

	len = ft_strlen(s1);
	if (in_set(s1[0], set))
		len--;
	if (in_set(s1[len - 1], set))
		len--;
	return (len);
}

static char	*ft_strndup_filter(char const s1[], char const st[], unsigned int s)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	str = malloc(s * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (in_set(s1[i], st))
		i++;
	j = 0;
	while (s1[i] != '\0' && j + 1 < s)
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strtrim(char const s1[], char const set[])
{
	unsigned int	size;
	char			*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
	{
		str = ft_strdup(s1);
		return (str);
	}
	size = len_aftertrim(s1, set) + 1;
	str = ft_strndup_filter(s1, set, size);
	return (str);
}
