/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatos-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:30:16 by cmatos-a          #+#    #+#             */
/*   Updated: 2024/09/18 10:30:15 by cmatos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] > s2[i] || s1[i] < s2[i])
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
	char	str1[] = "hellb";
	char	str2[] = "hella";

	printf ("%d", ft_strcmp(str1, str2));
}*/
