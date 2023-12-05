/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:32:23 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/06 15:28:48 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(const char s[])
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char dst[], const char src[], unsigned int size)
{
	unsigned int	len_d;
	unsigned int	j;

	len_d = ft_strlen(dst);
	if (len_d < size)
	{
		j = 0;
		while (src[j] != '\0')
		{
			if (j + len_d + 1 >= size)
				break ;
			dst[len_d + j] = src[j];
			j++;
		}
		dst[len_d + j] = '\0';
		return (len_d + ft_strlen(src));
	}
	return (size);
}
