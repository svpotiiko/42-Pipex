/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:06:54 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/24 17:50:12 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nue;

	nue = (t_list *)malloc(sizeof(*nue));
	if (!nue)
		return (NULL);
	nue -> content = content;
	nue -> next = NULL;
	return (nue);
}
