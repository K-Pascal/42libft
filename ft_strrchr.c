/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <pnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:44:29 by pnguyen-          #+#    #+#             */
/*   Updated: 2024/03/03 03:17:14 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char const s[], int c)
{
	char const	character = c;
	char const	*last = 0;
	while (*s != '\0')
	{
		if (*s == character)
			last = s;
		++s;
	}
	if (character == '\0')
		return ((char *)(s));
	return ((char *)last);
}
