/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoibase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:16:54 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/17 19:18:29 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_basepos(char const base[], char c)
{
	if (c == '\0')
		return (-1);

	char const	*found = ft_strchr(base, c);
	if (found == NULL)
		return (-1);
	return (found - base);
}

int	ft_atoibase(char const str[], char const base[])
{
	while (ft_isspace(*str))
		str++;
	int sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (*str == '\0')
		return (0);
	int	len_base = ft_strlen(base);
	int	nb = 0;
	int	i = get_basepos(base, *(str++));
	while (i >= 0)
	{
		nb = nb * len_base + i;
		i = get_basepos(base, *(str++));
	}
	return (sign * nb);
}
