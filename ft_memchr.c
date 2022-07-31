/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:44:32 by njerasea          #+#    #+#             */
/*   Updated: 2022/03/03 21:25:15 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	crr;

	str = (unsigned char *)s;
	crr = (unsigned char)c;
	while (n--)
		if (*str++ == crr)
			return (str - 1);
	return (NULL);
}
