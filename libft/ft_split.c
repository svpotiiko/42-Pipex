/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:04:25 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/24 18:37:49 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	a;

	a = 0;
	while (s[a] && s[a] != c)
		a++;
	return (a);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	a;
	size_t	b;

	b = 0;
	a = 1;
	if (s[0] == '\0')
		return (0);
	while (s[a])
	{
		if (s[a - 1] == c && s[a] != c)
			b++;
		a++;
	}
	if (s[0] != c)
		b++;
	return (b);
}

static char	*ft_wordcpy(char const *src, size_t b)
{
	char	*dst;
	size_t	a;

	a = 0;
	dst = malloc(sizeof(char) * (b + 1));
	if (!dst)
		return (NULL);
	while (a < b && src[a])
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (dst);
}

char	**ft_split(const char *s, char c)
{
	char	**dst;
	size_t	numofwords;
	size_t	a;
	size_t	len;
	size_t	index;

	a = 0;
	index = 0;
	if (s == NULL)
		return (NULL);
	numofwords = ft_wordcount(s, c);
	dst = malloc(sizeof(char *) * (numofwords + 1));
	if (!dst)
		return (NULL);
	while (a < numofwords && s[index])
	{
		while (s[index] == c)
			index++;
		len = ft_wordlen(&s[index], c);
		dst[a] = ft_wordcpy(&s[index], len);
		index += len;
		a++;
	}
	dst[numofwords] = NULL;
	return (dst);
}
