/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:01:21 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/23 12:33:32 by cmatos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	odd;

	sqrt = 0;
	odd = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb >= 0)
	{
		nb -= odd;
		sqrt++;
		odd += 2;
		if (nb == 0)
		{
			return (sqrt);
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("%i", ft_sqrt(6));
}
*/
