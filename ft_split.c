/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:28:42 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/01/20 17:19:26 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static size_t	count_words(char const s[], char c)
{
	size_t	count = 1;

	while (*s != '\0' && *s == c)
		s++;
	if (*s == '\0')
		return (0);

	int		i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static size_t	len_word(char const s[], char c)
{
	char const	*start = s;

	while (*s != '\0' && *s != c)
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
	char	**arr_str = malloc((num_words + 1) * sizeof(char *));

	if (arr_str == NULL)
		return (NULL);
	arr_str[num_words] = NULL;
	for (size_t i = 0; i < num_words; i++)
	{
		while (*s != '\0' && *s == c)
			s++;
		size_t	len = len_word(s, c);
		arr_str[i] = ft_substr(s, 0, len);
		if (arr_str[i] == NULL)
		{
			my_free_all(arr_str, i);
			return (NULL);
		}
		s += len;
	}
	return (arr_str);
}
