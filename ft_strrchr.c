/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:40:19 by njerasea          #+#    #+#             */
/*   Updated: 2022/04/15 11:23:20 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	cat;

	cat = (char)(c);
	i = ft_strlen(s);
	j = -1;
	while (i != -1)
	{
		if (s[i] == cat)
		{
			j = i;
			return ((char *)&s[j]);
		}
		i--;
	}
	if (j == -1)
		return ((char *)0);
	return (NULL);
}
