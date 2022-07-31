/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:35:06 by njerasea          #+#    #+#             */
/*   Updated: 2022/03/31 20:34:49 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new;
	size_t		i;
	size_t		l;

	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (l >= len)
		new = (char *)malloc(len + 1);
	else
		new = (char *)malloc(l + 1);
	if (!new)
		return (NULL);
	while (start < l && i < len)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
