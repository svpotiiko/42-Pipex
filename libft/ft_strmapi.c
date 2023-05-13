/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:46:32 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/20 12:11:16 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	a;
	size_t	b;

	if (!s)
		return (NULL);
	b = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (b + 1));
	if (str == NULL)
		return (NULL);
	a = 0;
	while (s[a])
	{
		str[a] = f(a, s[a]);
		a++;
	}
	str[a] = '\0';
	return (str);
}
