/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:44:29 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/11/09 19:18:38 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char s[], int c)
{
	unsigned int	i;
	char			*last;

	last = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = (char *)(&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)(&s[i]));
	return (last);
}
