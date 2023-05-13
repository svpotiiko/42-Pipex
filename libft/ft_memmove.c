/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:13:31 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/22 20:49:23 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	a;

	if (!dst && !src)
		return (0);
	if (dst <= src)
	{
		a = 0;
		while (a < (int)len)
		{
			*(char *)(dst + a) = *(char *)(src + a);
			a++;
		}
	}
	else
	{
		a = (int)len - 1;
		while (a >= 0)
		{
			*(char *)(dst + a) = *(char *)(src + a);
			a--;
		}
	}
	return (dst);
}
