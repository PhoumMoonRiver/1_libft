/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:48:32 by njerasea          #+#    #+#             */
/*   Updated: 2022/03/31 11:48:57 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*h;

	if (!lst || !*lst || !del)
		return ;
	while (lst && *lst)
	{
		h = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = h;
	}
}
