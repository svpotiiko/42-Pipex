/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:59:45 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/24 16:11:58 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	while (s1[a] != '\0')
	{
		str[b] = s1[a];
		a++;
		b++;
	}
	a = 0;
	while (s2[a] != '\0')
	{
		str[b] = s2[a];
		a++;
		b++;
	}
	str[b] = '\0';
	return (str);
}
