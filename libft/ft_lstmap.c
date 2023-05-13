/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:10:42 by vpotiiko          #+#    #+#             */
/*   Updated: 2022/10/24 17:57:00 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*b;

	if (!lst || !f || !del)
		return (0);
	a = 0;
	while (lst)
	{
		b = ft_lstnew(f(lst -> content));
		if (!b)
		{
			ft_lstclear(&a, del);
			return (0);
		}
		ft_lstadd_back(&a, b);
		lst = lst -> next;
	}
	return (a);
}
