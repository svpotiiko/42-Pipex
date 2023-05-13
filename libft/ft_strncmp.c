/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:47:53 by vpotiiko          #+#    #+#             */
/*   Updated: 2023/02/26 12:21:49 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while ((s1[a] || s2[a]) && a < n)
	{
		if (s1[a] != s2[a])
			return (((unsigned char *)s1)[a] - ((unsigned char *)s2)[a]);
		a++;
	}
	return (0);
}
