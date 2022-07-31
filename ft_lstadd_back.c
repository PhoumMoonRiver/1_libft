/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:09:59 by njerasea          #+#    #+#             */
/*   Updated: 2022/03/21 20:54:25 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*la;

	if (lst)
	{
		if (*lst)
		{
			la = ft_lstlast(*lst);
			la->next = new;
		}
		else
			*lst = new;
	}
}
