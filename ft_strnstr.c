/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:15:24 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/06 17:37:06 by pnguyen-         ###   ########.fr       */
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

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_l;

	len_l = ft_strlen(little);
	if (len_l == 0)
		return ((char *)big);
	i = 0;
	while (i + len_l - 1 < len)
	{
		j = 0;
		while (j < len_l)
		{
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		if (j == len_l)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
