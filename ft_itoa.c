/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:21:37 by njerasea          #+#    #+#             */
/*   Updated: 2022/04/17 17:16:12 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	i;

	i = (n < 0);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	cp;
	char			*res;

	i = ft_count(n) - 1;
	res = malloc(sizeof(char) * (i + 2));
	if (!res)
		return (NULL);
	res[i + 1] = '\0';
	if (n < 0)
		res[0] = '-';
	cp = n * (1 - (2 * (n < 0)));
	while (i >= (n < 0))
	{
		res[i] = (cp % 10) + '0';
		cp /= 10;
		i--;
	}
	return (res);
}
