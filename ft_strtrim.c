/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:54:12 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/10 15:33:22 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

typedef struct s_pos
{
	int	begin;
	int	end;
}	t_pos;

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

static t_pos	delim_aftertrim(char const s1[], char const set[])
{
	t_pos	delim;

	delim.begin = 0;
	while (s1[delim.begin] != '\0')
	{
		if (!in_set(s1[delim.begin], set))
			break ;
		delim.begin++;
	}
	delim.end = ft_strlen(s1) - 1;
	while (delim.end > 0)
	{
		if (!in_set(s1[delim.end], set))
			break ;
		delim.end--;
	}
	return (delim);
}

static char	*ft_strndup_delim(char const s1[], t_pos delim)
{
	char	*str;
	int		i;

	str = malloc((delim.end - delim.begin + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (delim.begin + i <= delim.end)
	{
		str[i] = s1[delim.begin + i];
		i++;
	}
	str[delim.begin + i] = '\0';
	return (str);
}

char	*ft_strtrim(char const s1[], char const set[])
{
	char	*str;
	t_pos	delim;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
	{
		str = ft_strdup(s1);
		return (str);
	}
	delim = delim_aftertrim(s1, set);
	str = ft_strndup_delim(s1, delim);
	return (str);
}