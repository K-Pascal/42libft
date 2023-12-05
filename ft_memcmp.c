/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:01:00 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/09 19:13:19 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		c1 = *(unsigned char *)(s1 + i * sizeof(unsigned char));
		c2 = *(unsigned char *)(s2 + i * sizeof(unsigned char));
		if (c1 != c2)
			break ;
		i++;
	}
	return (c1 - c2);
}
