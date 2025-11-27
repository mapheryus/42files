/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:56:29 by tide-oli          #+#    #+#             */
/*   Updated: 2025/11/27 11:21:44 by tide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		leng;
	int		i;
	char	*memory;

	i = 0;
	leng = 0;
	while (src[leng])
		leng++;
	memory = malloc(sizeof(char) * (leng + 1));
	if (memory == NULL)
		return (NULL);
	while (src[i])
	{
		memory[i] = src[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
/*
int	main(void)
{
	printf("%s", ft_strdup("test"));
	return (0);
}*/
