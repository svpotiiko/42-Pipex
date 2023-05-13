/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:26:28 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/24 16:12:50 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	f;
	size_t	a;

	if (!haystack || !needle)
		return (0);
	if (*needle == '\0')
		return ((char *)haystack);
	f = 0;
	while (haystack[f] != '\0' && f < len)
	{
		a = 0;
		while (needle[a] == haystack[f + a] && f + a < len)
		{
			a++;
			if (needle[a] == '\0')
				return ((char *)haystack + f);
		}
		f++;
	}
	return (NULL);
}
