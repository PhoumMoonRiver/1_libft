/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:57:16 by njerasea          #+#    #+#             */
/*   Updated: 2022/04/19 21:53:56 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;
	size_t	t;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	t = count * size;
	s = malloc(t);
	if (!s)
		return (NULL);
	ft_bzero(s, t);
	return (s);
}
