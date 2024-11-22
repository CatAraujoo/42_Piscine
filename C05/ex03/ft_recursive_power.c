/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:26:20 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/23 09:31:54 by cmatos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	n;
	int	res;

	i = 1;
	n = 1;
	res = 0;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 0)
	{
		res = nb * (ft_recursive_power(nb, power - 1));
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("%d", ft_recursive_power(2, 3));
}*/
