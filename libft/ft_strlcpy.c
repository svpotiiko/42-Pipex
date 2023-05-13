/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:16:17 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/16 18:27:37 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	a = 0;
	if (dstsize != 0)
	{
		while (src[a] != '\0' && a < (dstsize - 1))
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
		a = 0;
	}
	while (src[a])
		a++;
	return (a);
}
