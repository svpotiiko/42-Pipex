/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:44:15 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/25 12:35:36 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	if (c >= 255)
		(c -= 256);
	if (!ft_isascii(c))
		return (0);
	str = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			str = ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (str);
}
