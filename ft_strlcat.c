/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:16:33 by njerasea          #+#    #+#             */
/*   Updated: 2022/03/09 18:12:28 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	j = 0;
	while (dst[j] && j < dstsize)
		j++;
	i = j;
	while (src[j - i] && j + 1 < dstsize)
	{
		dst[j] = src[j - i];
		j++;
	}
	if (i < dstsize)
		dst[j] = '\0';
	return (i + ft_strlen(src));
}
