/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:45:23 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/26 10:21:30 by cmatos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc - 1;
	while (j >= 1)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write (1, &argv[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j--;
	}
}
