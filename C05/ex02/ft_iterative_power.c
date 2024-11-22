/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:00:31 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/18 15:24:53 by cmatos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;
	int	res;

	i = 1;
	n = 1;
	res = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (n <= power)
	{
		res = res * nb;
		n++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("%i", ft_iterative_power(2, 31));
}*/
