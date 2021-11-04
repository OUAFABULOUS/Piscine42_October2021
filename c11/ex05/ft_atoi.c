/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:39:53 by omoudni           #+#    #+#             */
/*   Updated: 2021/11/04 20:48:41 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	unsigned int	out;
	int				sign;

	out = 0;
	sign = 1;
	while (ft_is_space(*str))
		str++;
	while (ft_is_sign(*str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_is_numeric(*str))
	{
		out = 10 * out + (*str - 48);
		str++;
	}
	return (out * sign);
}
