/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:58:37 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/19 19:27:18 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			m;
	char			*str;
	char			a;

	str = (char *)s;
	a = (unsigned char)c;
	m = 0;
	while (m < n)
	{
		if (*str == a)
		{
			return (str);
		}
		str++;
		m++;
	}
	return (NULL);
}
