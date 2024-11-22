/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:17:42 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/10 14:59:19 by cmatos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*
#include <stdio.h>
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 11;
	n2 = 2;
	ft_ultimate_div_mod(&n1, &n2);
	printf("%d\n", n1);
	printf("%d", n2);

}*/
