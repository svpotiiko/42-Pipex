/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:22:27 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/22 20:55:45 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	a = ft_strlen(dst);
	b = 0;
	while (src[b] != '\0' && a + 1 < dstsize)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[b]));
}
