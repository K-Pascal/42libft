/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:24:17 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/06 16:33:52 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char s1[], const char s2[], unsigned int n)
{
	unsigned char	l1;
	unsigned char	l2;
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		l1 = s1[i];
		l2 = s2[i];
		if (l1 != l2)
			break ;
		if (l1 == '\0')
			break ;
		i++;
	}
	return (l1 - l2);
}
