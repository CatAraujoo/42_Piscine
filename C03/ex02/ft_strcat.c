/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:46:29 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/18 10:37:32 by cmatos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	char	str1[] = "hello";
	char	str2[] = " world";

	printf ("%s", ft_strcat(str1, str2));
}*/
