/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:28:42 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/17 19:01:11 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static size_t	len_word(char const s[], char const c)
{
	char const *start = s;
	while (*s != '\0' && *s != c)
		s++;

	return (s - start);
}

char	**ft_split(char const s[], char c)
{
	size_t const	num_words = ft_countwords(s, c);
	char			**arr_str = malloc((num_words + 1) * sizeof(char *));
	if (arr_str == NULL)
		return (NULL);

	arr_str[num_words] = NULL;
	for (size_t i = 0; i < num_words; ++i)
	{
		while (*s != '\0' && *s == c)
			s++;

		size_t const len = len_word(s, c);
		arr_str[i] = ft_substr(s, 0, len);
		if (arr_str[i] == NULL)
		{
			ft_free_all(arr_str);
			return (NULL);
		}

		s += len;
	}

	return (arr_str);
}
