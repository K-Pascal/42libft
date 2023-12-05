/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:42:03 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/06 16:52:12 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i * sizeof(unsigned char))
				== (unsigned char)c)
			return ((void *)(s + i * sizeof(unsigned char)));
		i++;
	}
	return (0);
}
