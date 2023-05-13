/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:25:33 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/24 18:16:35 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nb_len(int nb)
{
	int	length;

	length = 0;
	if (nb <= 0)
		length++;
	while (nb)
	{
		length++;
		nb = nb / 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;
	long	num;

	length = ft_nb_len(n);
	num = n;
	str = malloc(sizeof(char) * length + 1);
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	str[length--] = '\0';
	while (num)
	{
		str[length] = num % 10 + '0';
		length--;
		num = num / 10;
	}
	return (str);
}
