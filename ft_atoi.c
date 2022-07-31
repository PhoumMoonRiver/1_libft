/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:47:59 by njerasea          #+#    #+#             */
/*   Updated: 2022/07/29 20:36:09 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_signch(int sign, const char *str, int i, long long res)
{
	if ((sign == -1) && ((res > 9223372036854775807 / 10)
			|| (res == 9223372036854775807 / 10 && str[i] - '0' > 8)))
		return (0);
	else if ((sign == 1) && ((res > 9223372036854775807 / 10)
			|| (res == 9223372036854775807 / 10 && str[i] - '0' > 7)))
		return (-1);
	res = (res * 10) + (str[i++] - '0');
	return (res * sign);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res > 9223372036854775807 / 10 || (res == 9223372036854775807 / 10
				&& str[i] - '0' > 7))
			return (ft_signch(sign, str, i, res));
		res = (res * 10) + (str[i++] - '0');
	}
	return (res * sign);
}
