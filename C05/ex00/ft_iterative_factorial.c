/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:41:53 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/18 14:05:06 by cmatos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb >= 1 && i != '0')
	{
		res = res * nb;
		nb = nb - 1;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = 5;
	printf ("%i", ft_iterative_factorial(a));
}*/
