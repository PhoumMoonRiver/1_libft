/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:28:52 by njerasea          #+#    #+#             */
/*   Updated: 2022/04/16 22:04:43 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cat;

	cat = (char)c;
	while (*s && cat != *s)
		s++;
	if (cat == *s)
		return ((char *)s);
	return (NULL);
}
