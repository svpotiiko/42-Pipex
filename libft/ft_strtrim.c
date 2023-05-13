/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:51:32 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/24 18:11:56 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (s1[start])
	{
		if (ft_strchr(set, s1[start]))
			start++;
		else
			break ;
	}
	while (end >= start)
	{
		if (ft_strchr(set, s1[end]))
			end--;
		else
			break ;
	}
	return (ft_substr(s1, start, end - start + 1));
}
