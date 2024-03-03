/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:11:18 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/03 18:12:18 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static int	num_digits(int n)
{
	int len = 0;
	while (n != 0)
	{
		++len;
		n /= 10;
	}

	return (len);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return (ft_strdup("0"));

	int		len = num_digits(n) + (n < 0);
	char	*digits = malloc((len + 1) * sizeof(char));
	if (digits == NULL)
		return (NULL);

	digits[len] = '\0';
	digits[0] = '-';
	while (n != 0)
	{
		if (n < 0)
			digits[--len] = -(n % 10) + '0';
		else
			digits[--len] = (n % 10) + '0';
		n /= 10;
	}

	return (digits);
}
