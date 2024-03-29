/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:24:17 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/03 18:10:31 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(char const s1[], char const s2[], size_t n)
{
	if (n == 0)
		return (0);

	while (--n != 0)
	{
		if (*s1 != *s2 || *s1 == '\0')
			break ;

		++s1;
		++s2;
	}

	return ((unsigned char)*s1 - (unsigned char)*s2);
}
