/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:35:04 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/18 10:40:23 by cmatos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	if (s1[i] < s2[i] || s1[i] > s2[i])
	{
		res = s1[i] - s2[i];
		return (res);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "hellq";
	char	str2[] = "hellp";

	printf ("%d", ft_strncmp(str1, str2, 5));
}*/
