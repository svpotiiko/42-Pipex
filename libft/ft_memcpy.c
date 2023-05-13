/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:14:56 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/22 17:48:56 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	a;

	a = 0;
	if (!dst && !src)
		return (0);
	while (a < n)
	{
		((unsigned char *)dst)[a] = ((unsigned char *)src)[a];
		a++;
	}
	return (dst);
}
