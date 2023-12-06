/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:44:29 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/12/06 15:28:44 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char s[], int c)
{
	char	character = c;
	char	*last = 0;

	while (*s != '\0')
	{
		if (*s == character)
			last = (char *)(s);
		s++;
	}
	if (character == '\0')
		return ((char *)(s));
	return (last);
}
