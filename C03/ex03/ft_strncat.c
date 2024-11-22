/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:01:12 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/18 14:13:43 by cmatos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i++] = src[j];
		j++;
	}
	dest[i++] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[10] = "hello";
	char	dest[10] = "helloo";

	printf ("%s", ft_strncat(dest, src, 3));
}*/
