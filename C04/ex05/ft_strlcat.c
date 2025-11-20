/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:27:56 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/19 20:41:41 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (i >= size)
		return (size + j);
	j = 0;
	while (src[j] && j < (size - i -1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
/*
int	main(void)
{
	char	c[4] = "";
	char	s[] = "Mundo";
	unsigned int	i = 10;

	printf("%d", ft_strlcat(c, s, i));
	return (0);
}*/
