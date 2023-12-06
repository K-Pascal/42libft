/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:28:42 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/12/06 15:29:22 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static size_t	count_words(char const s[], char c)
{
	size_t	count = 0;

	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (count);
}

static size_t	len_word(char const s[], char c)
{
	char const	*start = s;

	while (*s != c && *s != '\0')
		s++;
	return (s - start);
}

static void	my_free_all(char **arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
		free(arr[i]);
	free(arr);
}

char	**ft_split(char const s[], char c)
{
	size_t	num_words = count_words(s, c);
	char	**arr_str = ft_calloc(num_words + 1, sizeof(char *));
	size_t	len;

	if (!arr_str)
		return (NULL);
	for (size_t i = 0; i < num_words; i++)
	{
		while (*s == c && *s != '\0')
			s++;
		len = len_word(s, c);
		arr_str[i] = ft_substr(s, 0, len);
		if (!arr_str[i])
		{
			my_free_all(arr_str, i);
			return (NULL);
		}
		s += len;
	}
	return (arr_str);
}
