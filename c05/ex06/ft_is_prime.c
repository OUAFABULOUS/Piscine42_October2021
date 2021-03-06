/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:06:37 by omoudni           #+#    #+#             */
/*   Updated: 2021/10/23 12:46:42 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb < 2 || !(nb % 2))
		return (0);
	i = 3;
	while (i <= 46340 && i * i <= nb)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
