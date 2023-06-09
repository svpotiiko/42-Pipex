/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:10:35 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/13 18:12:24 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < 65 || c > 90)
	{
		if (c < 97 || c > 122)
		{
			if (c < '0' || c > '9' )
			{
				return (0);
			}
		}
	}
	return (1);
}
